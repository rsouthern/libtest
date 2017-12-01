#ifndef FOOIMPL_H
#define FOOIMPL_H

#include <string>

/**
 * This is the BASE CLASS for the implementation of foo
 */
template <unsigned int DIM> 
class FooImpl {
  public:
    FooImpl() {};
    virtual ~FooImpl() = default;
    virtual std::string name() = 0;  
};

#endif //FOOIMPL_H
