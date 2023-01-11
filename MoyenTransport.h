#pragma once
#include <string>
#include <iostream>

using namespace std;

class MoyenTransport {

protected:
    string nom;
    double vitesse; // coefficient de multiplication de la distance d'un deplacement
    
public:
    MoyenTransport(string nom, double vitesse);
    friend ostream& operator<<(ostream& os, const MoyenTransport& m);
    double getVitesse();
    string getNom();
    virtual void afficher() const;
    
} ;

inline ostream& operator<<(ostream& os, const MoyenTransport& m) {
    m.afficher();
    return os;
}