#include "MoyenTransport.h"
#include "Lieu.h"

class Metro : public MoyenTransport {

    Lieu * tab; // Tableau dynamique des stations
    int nbMaxStations;
    int nbStations;

public:

    Metro(string nom, int max, double vitesse); // Initialisation d'une ligne vide de taille <= max
    ~Metro(); // Destructeur
    ostream& operator<<(ostream& os); // fonction dérivée de la fonction virtuelle définie dans MoyenTransport
    void ajouterStation(Lieu station);
    void ajouterStation(Lieu station, int index);
    void supprimerStation(Lieu station);
    bool appartientStation(Lieu station);
    int indexStation(Lieu station);
    Lieu stationIndex(int index);
    
} ;