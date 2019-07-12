#include <iostream>
#include "creator.hpp"

#include "mycreator.hpp"

#define THEIRS 3

Product *MyCreator::Create(ProductId pid) {
    if (pid.id == THEIRS) return new TheirProduct;

    return Creator::Create(pid);
}
