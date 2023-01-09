#include "Voiture.h"

Voiture::Voiture(Utilisateur &user, string nom, float vitesse):MoyenTransport(nom,vitesse) {
    this->proprietaire = user;
    user.ajouterVoiture(*this);
}

Voiture::Voiture():MoyenTransport(nom,vitesse){
    this->proprietaire = Utilisateur();
}

Utilisateur Voiture::getProprietaire() {
    return this->proprietaire;
}