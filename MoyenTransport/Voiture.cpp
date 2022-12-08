#include "Voiture.h"

Voiture::Voiture(Utilisateur *user, string nom, float vitesse):MoyenTransport(nom,vitesse) {
    this->nom = nom;
    this->vitesse = vitesse;
}