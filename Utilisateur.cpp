#include "Utilisateur.h"
#include <iostream>
#include <string>

using namespace std;

Utilisateur::Utilisateur(string nom, bool possedeAbonnementMetro){
    this->nom = nom;
    this->peutMarcher = true;
    this->possedeAbonnementMetro = possedeAbonnementMetro;
    this->possedeVoiture = false;
    this->possedeVelo = false;
    
    this->voiture = Voiture();
    this->velo = Velo();
    this->metro = Metro();
}

Utilisateur::Utilisateur(){
    this->nom = "default user";
    this->peutMarcher = true;
    this->possedeAbonnementMetro = true;
    this->possedeVoiture = true;
    this->possedeVelo = false;
    
    this->voiture = Voiture();
    this->velo = Velo();
    this->metro = Metro();

}
void Utilisateur::ajouterVoiture(Voiture &v) {
    this->possedeVoiture = true;
    this->voiture = v;
}

void Utilisateur::ajouterVelo(Velo &v) {
    this->possedeVelo = true;
    this->velo = v;
}

void Utilisateur::ajouterMetro(Metro &m){
    this->possedeAbonnementMetro = true;
    this->metro = m;
}

void Utilisateur::nePeutPlusMarcher() {
    this->peutMarcher = false;
}

string Utilisateur::getNom() {
    return this->nom;
}

Voiture Utilisateur::getVoiture() {
    return this->voiture;
}

Velo Utilisateur::getVelo() {
    return this->velo;
}

bool Utilisateur::getPossedeVoiture() {
    return this->possedeVoiture;
}

bool Utilisateur::getPossedeVelo() {
    return this->possedeVelo;
}

bool Utilisateur::getPossedeAbonnementMetro() {
    return this->possedeAbonnementMetro;
}

bool Utilisateur::getpeutMarcher() {
    return this->peutMarcher;
}

void Utilisateur::afficher() const {
    
    cout << endl;
    cout << "Nom de l'utilisateur : " << this->nom ;
    cout << ", Moyens de transports disponibles : " << endl;
    if (this->peutMarcher) {
        cout << "  Marcher  " ;
    }
    if (this->possedeVelo) {
        cout << "  Velo  " ;
    }
    if (this->possedeAbonnementMetro) {
        cout << "  Metro  " ;
    }
    if (this->possedeVoiture) {
        cout << "  Voiture  " ;
    }
    cout << endl;
}

double Utilisateur::calculTransport(Lieu &dep, Lieu &dest, char mode){
    
    double dist;
    double vitesse;
    
    switch (mode) {
        case 'V' :  //voiture
            if (! (dep.getVoiture() && dest.getVoiture())) {
                cout << "L'un des deux lieux n'est pas accessible en voiture" << endl;
                return 99999.0;
            }
            if (! (this->possedeVoiture)) {
                cout << "L'utilisateur ne possède pas de voiture" << endl;
                return 99999.0;
            }

            dist = dep.distance(dest);
            vitesse = this->voiture.getVitesse();

            break;
        case 'v' : //velo
            if (! (dep.getVelo() && dest.getVelo())) {
                cout << "L'un des deux lieux n'est pas accessible en velo" << endl;
                return 99999.0;
            }
            if (! (this->possedeVelo)) {
                cout << "L'utilisateur ne possède pas de velo" << endl;
                return 99999.0;
            }

            dist = dep.distance(dest);
            vitesse = this->velo.getVitesse();
            break;
        case 'm': //metro
            if (! (dep.getMetro() && dest.getMetro())) {
                cout << "L'un des deux lieux n'est pas accessible en Metro" << endl;
                return 99999.0;
            }
            if (! (this->possedeAbonnementMetro)) {
                cout << "L'utilisateur ne possède pas d'abonnement de Metro'" << endl;
                return 99999.0;
            }

            dist = this->metro.distance(dep,dest);
            vitesse = this->metro.getVitesse();
            break;
        case 'p': //pieds
            if (! (dep.getPieds() && dest.getPieds())) {
                cout << "L'un des deux lieux n'est pas accessible à pied" << endl;
                return 99999.0;
            }
            if (! (this->peutMarcher)) {
                cout << "L'utilisateur ne peut pas marcher" << endl;
                return 99999.0;
            }

            dist = dep.distance(dest);
            vitesse = this->marcher.getVitesse();
            break;
        default :
            cout << "Mauvais argument" << endl;
            return 999999999.0;

    }
    double temps;
    temps = dist/vitesse;
    return temps;

}