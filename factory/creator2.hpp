#ifndef __CREATER2__
#define __CREATER2__

#include "product.hpp"

class Creator {
    public:
        virtual Product *CreateProduct() = 0;
};

template <class TheProduct>
class StandardCreator: public Creator {
    public:
        virtual Product *CreateProduct();
};

template <class TheProduct>
Product *StandardCreator<TheProduct>::CreateProduct() {
    return new TheProduct;
}
#endif
