#include "MoyenTransport.h"
#include <iostream>

using namespace std;

MoyenTransport::MoyenTransport(string nom, float vitesse) {
    this->nom = nom;
    this->vitesse = vitesse;
}

ostream& MoyenTransport::operator<<(ostream& os) {
    cout << "Nom :" << this->nom << endl;
    cout << "Vitesse :" << this->vitesse << endl;
}

MoyenTransport::~MoyenTransport() {}

float MoyenTransport::getVitesse(){
    return this->vitesse;
}