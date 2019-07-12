#include <iostream>
#include "creator1.hpp"

#include "product.hpp"

#define MINE  1
#define YOURS 2

Product *Creator::CreateProduct() {
    return new MyProduct;
}

Product *Creator::GetProduct() {
    if (_product == 0) {
        _product = CreateProduct();
    }

    return _product;
}
