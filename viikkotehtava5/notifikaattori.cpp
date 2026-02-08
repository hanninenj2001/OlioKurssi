#include "Notifikaattori.h"
#include "seuraaja.h"
#include <iostream>

notifikaattori::notifikaattori() : seuraajat(nullptr) {}

notifikaattori::~notifikaattori() {
    while (seuraajat != nullptr) {
        Seuraaja* temp = seuraajat;
        seuraajat = seuraajat->next;
        delete temp;
    }
}

void notifikaattori::lisaa(Seuraaja* s) {
    s->next = seuraajat;
    seuraajat = s;
}

void notifikaattori::lisaa(Seuraaja *s)
{

}

void notifikaattori::poista(Seuraaja* s) {
    if (seuraajat == nullptr) return;

    if (seuraajat == s) {
        seuraajat = seuraajat->next;
        delete s;
        return;
    }

    Seuraaja* o = seuraajat;
    while (o->next != nullptr && o->next != s) {
        o = o->next;
    }

    if (o->next == s) {
        o->next = s->next;
        delete s;
    }
}

void notifikaattori::tulosta() const {
    Seuraaja* o = seuraajat;
    while (o != nullptr) {
        std::cout << o->getNimi() << std::endl;
        o = o->next;
    }
}

void notifikaattori::postita(const std::string& viesti) const {
    Seuraaja* o = seuraajat;
    while (o != nullptr) {
        o->paivitys(viesti);
        o = o->next;
    }
}


void notifikaattori::lisaa(Seuraaja *s)
{

}
