//
// Created by jonat on 31/08/2023.
//

#ifndef EXERCISE1_GREET_H
#define EXERCISE1_GREET_H

#include "Person.h"
#include <iostream>

using namespace exercise1;

void greet(const Person& p) {
    std::cout << "Hello, " << p.getFullName() << std::endl;
}

#endif //EXERCISE1_GREET_H
