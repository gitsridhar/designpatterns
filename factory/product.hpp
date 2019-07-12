#ifndef __PRODUCT__
#define __PRODUCT__

class Product {
};

class ProductId {
    public:
        int id;
};

class MyProduct : public Product {
    public:
        MyProduct() {};
};

class YourProduct : public Product {
};

#endif
