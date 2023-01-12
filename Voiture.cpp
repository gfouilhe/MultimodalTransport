#include "Voiture.h"

Voiture::Voiture(string nom, double vitesse):MoyenTransport(nom,vitesse) {}

Voiture::Voiture():MoyenTransport("Voiture",3.0){}