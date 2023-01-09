#include "Voiture.h"
#include "Velo.h"
class Utilisateur {

    string nom;
    Voiture voiture;
    Velo velo;
    bool possedeVoiture;
    bool possedeVelo;
    bool possedeAbonnementMetro;
    bool peutMarcher;


public:
    Utilisateur();
    Utilisateur(string nom, bool possedeAbonnementMetro);
    void ajouterVoiture(Voiture &v);
    void ajouterVelo(Velo &v);
    void nePeutPlusMarcher();

    string getNom();
    Voiture getVoiture();
    Velo getVelo();
    bool getPossedeVoiture();
    bool getPossedeVelo();
    bool getPossedeAbonnementMetro();
    bool getpeutMarcher();
    void afficher() const;
    friend ostream& operator<<(ostream& os, const Utilisateur& u);

} ;

inline ostream& operator<<(ostream& os, const Utilisateur& u) {
    u.afficher();
    return os;
}