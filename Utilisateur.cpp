#include "Utilisateur.h"
#include "Voiture.h"
#include "Velo.h"
#include <typeinfo>
#include <iostream>

using namespace std;

Utilisateur::Utilisateur(string nom, bool possedeAbonnementMetro){
    this->nom = nom;
    this->peutMarcher = true;
    this->possedeAbonnementMetro = possedeAbonnementMetro;
    this->possedeVoiture = false;
    this->possedeVelo = false;
}

Utilisateur::Utilisateur(){
    this->nom = "";
    this->peutMarcher = true;
    this->possedeAbonnementMetro = true;
    this->possedeVoiture = true;
    this->possedeVelo = false;

}
void Utilisateur::ajouterVoiture(Voiture &v) {
    this->possedeVoiture = true;
    this->voiture = v;
}

void Utilisateur::ajouterVelo(Velo &v) {
    this->possedeVelo = true;
    this->velo = v;
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

Velo Utilisateur::getVelo() {
    return this->velo;
}

bool Utilisateur::getPossedeVoiture() {
    return this->possedeVoiture;
}

bool Utilisateur::getPossedeVelo() {
    return this->possedeVelo;
}

bool Utilisateur::getPossedeAbonnementMetro() {
    return this->possedeAbonnementMetro;
}

bool Utilisateur::getpeutMarcher() {
    return this->peutMarcher;
}

void Utilisateur::afficher() const {
    cout << "=====================================" << endl;
    cout << "Nom de l'utilisateur :" << nom << endl;
    cout << "Moyens de transports disponibles : " << endl;
    if (peutMarcher) {
        cout << "- Marcher" << endl;
    }
    if (possedeVelo) {
        cout << "- Vélo" << endl;
    }
    if (possedeAbonnementMetro) {
        cout << "- Métro" << endl;
    }
    if (possedeVoiture) {
        cout << "- Voiture" << endl;
    }
    cout << "=====================================" << endl;
}
