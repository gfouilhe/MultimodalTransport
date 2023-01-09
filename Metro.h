#pragma once
#include "MoyenTransport.h"
#include "Lieu.h"

class Metro : public MoyenTransport {

    Lieu * tab; // Tableau dynamique des stations
    int nbMaxStations;
    int nbStations;

public:

    Metro(string nom, int max, double vitesse); // Initialisation d'une ligne vide de taille <= max
    ~Metro(); // Destructeur
    virtual void afficher() const;
    void ajouterStation(Lieu station);
    void ajouterStation(Lieu station, int index);
    void supprimerStation(Lieu station);
    bool appartientStation(Lieu station);
    int indexStation(Lieu station);
    Lieu stationIndex(int index);
    
} ;