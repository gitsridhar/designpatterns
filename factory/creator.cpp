#include <iostream>
#include "creator.hpp"

#include "product.hpp"

#define MINE  1
#define YOURS 2

Product *Creator::Create(ProductId pid) {
    if (pid.id == MINE) return new MyProduct;
    if (pid.id == YOURS) return new YourProduct;

    return NULL;
}
