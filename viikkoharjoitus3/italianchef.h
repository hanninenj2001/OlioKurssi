#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

class ItalianChef : public Chef {
private:
    std::string password = "pizza";
    int flour;
    int water;

    int makePizza(int flour, int water);

public:
    ItalianChef(std::string name);
    ~ItalianChef();

    bool askSecret(std::string password, int flour, int water);
};

#endif

