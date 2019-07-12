#ifndef __MYCREATER__
#define __MYCREATER__

#include "creator.hpp"
#include "product.hpp"

class MyCreator : public Creator {
    public:
        virtual Product *Create(ProductId);
};

class TheirProduct : public Product {
};
#endif
