#include <string>

using namespace std;

class MoyenTransport {

    string nom;
    float vitesse; // coefficient de multiplication de la distance d'un déplacement
    // gestion des zones interdites

    
public:
    // pas de constructeur par défaut car aucun MoyenTransport sans sousclasse
    virtual ostream& operator<<(ostream& os); // affichage
    ~MoyenTransport();
    float getVitesse();
    
} ;