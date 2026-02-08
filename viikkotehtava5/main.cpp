#include "Notifikaattori.h"
#include "Seuraaja.h"

int main() {
    notifikaattori n;

    n.lisaa(new seuraaja("Anna"));
    n.lisaa(new seuraaja("Matti"));
    n.lisaa(new seuraaja("Liisa"));

    n.tulosta();
    n.postita("Uusi viesti!");

    return 0;
}

