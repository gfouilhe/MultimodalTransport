#include "Utilisateur.h"
#include "Voiture.h"
#include <typeinfo>


Utilisateur::Utilisateur(string nom, bool possedeAbonnementMetro){
    this->nom = nom;
    this->peutMarcher = true;
    this->possedeAbonnementMetro = possedeAbonnementMetro;
    this->possedeVoiture = false;
    this->voiture = Voiture();

}

Utilisateur::Utilisateur(){
    this->nom = "";
    this->peutMarcher = true;
    this->possedeAbonnementMetro = true;
    this->possedeVoiture = true;
    this->voiture = Voiture();

}
void Utilisateur::ajouterVoiture(Voiture &v) {
    this->possedeVoiture = true;
    this->voiture = v;
}

void Utilisateur::nePeutPlusMarcher() {
    this->peutMarcher = false;
}

string Utilisateur::getNom() {
    return this->nom;
}

Voiture Utilisateur::getVoiture() {
    return this->voiture;
}

bool Utilisateur::getPossedeVoiture() {
    return this->possedeVoiture;
}

bool Utilisateur::getPossedeAbonnementMetro() {
    return this->possedeAbonnementMetro;
}

bool Utilisateur::getpeutMarcher() {
    return this->peutMarcher;
}
