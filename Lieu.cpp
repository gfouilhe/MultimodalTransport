#include "Lieu.h"
#include <math.h>
#include <iostream>

using namespace std;


Lieu::Lieu(){
    setNom("");
    setX(0.0);
    setY(0.0);
    setAltitude(0.0);
    setVoiture(false);
    setVelo(false);
    setMetro(false);
    setPieds(false);
}

Lieu::Lieu(string nom, double position_x, double position_y, double altitude, bool voiture, bool velo, bool metro, bool pieds){
    setNom(nom);
    setX(position_x);
    setY(position_y);
    setAltitude(altitude);
    setVoiture(voiture);
    setVelo(velo);
    setMetro(metro);
    setPieds(pieds);
}

void Lieu::setNom(string nom){
    this->nom = nom;
}
void Lieu::setX(double position_x){
    this->position_x = position_x;
}

void Lieu::setY(double position_y){
    this->position_y = position_y;
}

void Lieu::setAltitude(double Altitude){
    this->altitude = Altitude;
}

void Lieu::setVoiture(bool voiture){
    this->voiture = voiture;
}

void Lieu::setVelo(bool velo){
    this->velo = velo;
}

void Lieu::setMetro(bool metro){
    this->metro = metro;
}

void Lieu::setPieds(bool pieds){
    this->pieds = pieds;
}

string Lieu::getNom() const{
    return this->nom;
}

double Lieu::getX() const{
    return this->position_x;
} 

double Lieu::getY() const{
    return this->position_y;
} 

double Lieu::distance(const Lieu &LieuBis) const {// à reflechir pour le calcul de la distance par metro
    double dx = this->position_x - LieuBis.position_x;
    double dy = this->position_y - LieuBis.position_x;
    return sqrt(dx*dx + dy*dy); 
}

void Lieu::saisir(){
    cout << "Tapez l'abscisse : ";  cin >> this->position_x; cout << endl;
    cout << "Tapez l'ordonnee : ";  cin >> this->position_y; cout << endl;
} 

void Lieu::afficher() const{
    cout << "=====================================" << endl;
    cout << "Le lieu : " << this->nom << " est accessible avec les moyens de transports suivants : " << endl ;
    if (this->metro) {
        cout << "Metro" << endl;
    }
    if (this->velo) {
        cout << "Velo" << endl;
    }
    if (this->pieds) {
        cout << "A pied" << endl;
    }
    if (this->voiture) {
        cout << "Voiture" << endl;
    }
    cout << "L'abscisse vaut " << this->position_x << endl; 
    cout << "L'ordonnee vaut " << this->position_y << endl;
    cout << "=====================================" << endl;
}

bool Lieu::operator==(const Lieu& l) {
    return this->nom == l.nom && this->position_x == l.position_x && this->position_y == l.position_y;
}
