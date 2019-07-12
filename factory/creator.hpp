#ifndef __CREATER__
#define __CREATER__

#include "product.hpp"

class Creator {
    public:
        virtual Product *Create(ProductId);
};
#endif
