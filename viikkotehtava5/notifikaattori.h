#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "Seuraaja.h"
#include <string>

class Notifikaattori {
public:
    Notifikaattori();
    ~Notifikaattori();

    void lisaa(seuraaja* s);
    void poista(seuraaja* s);
    void tulosta() const;
    void postita(const std::string& viesti) const;

private:
    seuraaja* seuraajat; // listan alku
};

#endif

