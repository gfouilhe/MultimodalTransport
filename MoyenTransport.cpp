#include "MoyenTransport.h"
#include <iostream>

using namespace std;

MoyenTransport::MoyenTransport(string nom, double vitesse) {
    this->nom = nom;
    this->vitesse = vitesse;
}

void MoyenTransport::afficher() const {
    cout << endl;
    cout << "Nom :" << this->nom << endl;
    cout << "Vitesse :" << this->vitesse << endl;
    cout << endl;
}

double MoyenTransport::getVitesse(){
    return this->vitesse;
}

string MoyenTransport::getNom(){
    return this->nom;
}