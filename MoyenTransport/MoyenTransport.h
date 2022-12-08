#include <string>

using namespace std;

class MoyenTransport {

protected:
    string nom;
    float vitesse; // coefficient de multiplication de la distance d'un déplacement
    // gestion des zones interdites

    
public:
    MoyenTransport(string nom, float vitesse);
    virtual ostream& operator<<(ostream& os); // affichage
    ~MoyenTransport();
    float getVitesse();
    
} ;