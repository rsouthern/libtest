#ifndef FOO_H
#define FOO_H

#include "hooimpl.h"
#include "gooimpl.h"
#include <iostream>

template<unsigned int DIM = 3, bool ISGPU = true>
class foo {
	public:
		foo();		
		~foo();
		foo(foo&&) = default;
		foo& operator=(foo&&) = default;

	private:
        typedef typename std::conditional<ISGPU, GooImpl<DIM>, HooImpl<DIM> >::type ImplType;
        ImplType m_impl;
		//FooImpl<DIM>* m_impl;
};

template<unsigned int DIM, bool ISGPU>
foo<DIM,ISGPU>::foo() : m_impl() {
    std::cout << m_impl.name() << std::endl;
}

template<unsigned int DIM, bool ISGPU>
foo<DIM,ISGPU>::~foo() {
}



/*
template<unsigned int DIM>
foo<DIM,false>::foo() {
    m_impl = new GooImpl<DIM>();
}

template<unsigned int DIM>
foo<DIM,true>::foo() {
    m_impl = new HooImpl<DIM>();
}*/

#endif //FOO_H
