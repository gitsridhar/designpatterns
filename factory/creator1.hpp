#ifndef __CREATER1__
#define __CREATER1__

#include "product.hpp"

class Creator {
    public:
        Product *GetProduct();
    protected:
        virtual Product *CreateProduct();
    private:
        Product *_product;
};
#endif
