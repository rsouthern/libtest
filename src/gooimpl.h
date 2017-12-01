#ifndef GOOIMPL_H
#define GOOIMPL_H

#include "fooimpl.h"

template <unsigned int DIM>
class GooImpl : public FooImpl<DIM> {
  public:
    GooImpl() : FooImpl<DIM>() {}
    ~GooImpl() = default;    
    std::string name() {return std::string("GooImpl");}
};

#endif //GOOIMPL_H