#include "Seuraaja.h"
#include <iostream>



std::string seuraaja::getNimi() const {
    return time;
}

void seuraaja::paivitys(const std::string& viesti) {
    std::cout << &time << ": " << viesti << std::endl;
}

