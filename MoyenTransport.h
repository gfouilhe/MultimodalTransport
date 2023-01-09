#include <string>

using namespace std;

class MoyenTransport {

protected:
    string nom;
    float vitesse; // coefficient de multiplication de la distance d'un deplacement
    virtual void afficher() const;
    
public:
    MoyenTransport(string nom, float vitesse);
    friend ostream& operator<<(ostream& os, const MoyenTransport& m);
    float getVitesse();
    string getNom();
    
} ;

inline ostream& operator<<(ostream& os, const MoyenTransport& m) {
    m.afficher();
    return os;
}