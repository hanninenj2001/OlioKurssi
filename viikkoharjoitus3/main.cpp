#include "ItalianChef.h"

int main() {
    ItalianChef chef("Mario");

    chef.makeSalad(25);   // 5 annosta
    chef.makeSoup(9);     // 3 annosta

    chef.askSecret("pizza", 20, 15);  // oikea salasana
    chef.askSecret("wrong", 20, 15);  // väärä salasana

    return 0;
}
