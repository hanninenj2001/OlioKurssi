#include <iostream>
#include <algorithm>
#include "italianchef.h"
ItalianChef::ItalianChef(std::string name) : Chef(name) {
    std::cout << "ItalianChef constructor called. Name: "
              << chefName << std::endl;
}

ItalianChef::~ItalianChef() {
    std::cout << "ItalianChef destructor called. Name: "
              << chefName << std::endl;
}

bool ItalianChef::askSecret(std::string password, int flour, int water) {
    std::cout << "askSecret called" << std::endl;

    if (password == this->password) {
        makePizza(flour, water);
        return true;
    } else {
        std::cout << "Wrong password!" << std::endl;
        return false;
    }
}

int ItalianChef::makePizza(int flour, int water) {
    int pizzasFromFlour = flour / 5;
    int pizzasFromWater = water / 5;
    int pizzas = std::min(pizzasFromFlour, pizzasFromWater);

    std::cout << chefName << " makes "
              << pizzas << " pizza(s)" << std::endl;

    return pizzas;
}
