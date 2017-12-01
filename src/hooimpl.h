#ifndef HOOIMPL_H
#define HOOIMPL_H

#include "fooimpl.h"

template <unsigned int DIM>
class HooImpl : public FooImpl<DIM> {
  public:
    HooImpl() : FooImpl<DIM>() {}
    ~HooImpl() = default;
    std::string name() {return std::string("HooImpl");}
};

#endif //HOOIMPL_H