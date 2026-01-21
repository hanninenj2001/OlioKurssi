#include "chef.h"
#include <iostream>

Chef::Chef(std::string name) : chefName(name) {
    std::cout << "Chef constructor called. Name: "
              << chefName << std::endl;
}

Chef::~Chef() {
    std::cout << "Chef destructor called. Name: "
              << chefName << std::endl;
}
std::string Chef::getName() const{
    return chefName;
}

int Chef::makeSalad(int ingredients) {
    int portions = ingredients / 5;
    std::cout << chefName << " makes salad. Portions: "
              << portions << std::endl;
    return portions;
}

int Chef::makeSoup(int ingredients) {
    int portions = ingredients / 3;
    std::cout << chefName << " makes soup. Portions: "
              << portions << std::endl;
    return portions;
}

