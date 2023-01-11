#pragma once
#include "Voiture.h"
#include "Velo.h"
#include "Lieu.h"
#include "Metro.h"
#include "Marcher.h"
#include <iostream>
#include <string>

using namespace std;

class Utilisateur {

protected:
    string nom;
    Voiture voiture;
    Velo velo;
    Metro metro;
    Marcher marcher;
    bool possedeVoiture;
    bool possedeVelo;
    bool possedeAbonnementMetro;
    bool peutMarcher;
    void afficher() const;

public:
    Utilisateur();
    Utilisateur(string nom, bool possedeAbonnementMetro);
    void ajouterVoiture(Voiture &v);
    void ajouterVelo(Velo &v);
    void ajouterMetro(Metro &m);
    void nePeutPlusMarcher();

    string getNom();
    Voiture getVoiture();
    Velo getVelo();
    bool getPossedeVoiture();
    bool getPossedeVelo();
    bool getPossedeAbonnementMetro();
    bool getpeutMarcher();

    double calculTransport(Lieu &dep, Lieu &dest, char mode);

    friend ostream& operator<<(ostream& os, const Utilisateur& u);

} ;

inline ostream& operator<<(ostream& os, const Utilisateur& u) {
    u.afficher();
    return os;
}