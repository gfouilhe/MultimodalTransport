#include "Lieu.h"

using namespace std;

void Lieu::setX(double position_x)
{
    this->position_x = position_x;
}

void Lieu::setY(double position_y)
{
    this->position_y = position_y;
}

void Lieu::setAltitude(double Altitude)
{
    this->Altitude = Altitude;
}

void Lieu::setVoiture(bool voiture)
{
    this->voiture = voiture;
}

void Lieu::setVelo(bool velo)
{
    this->velo = velo;
}

void Lieu::setMetro(bool metro)
{
    this->metro = metro;
}


void Lieu::setPieds(bool pieds)
{
    this->pieds = pieds;
}

double Lieu::getX() const
{
    return this->x;
} 

double Lieu::getY() const
{
    return this->y;
} 

double Lieu::distance(const Lieu &LieuBis) const // à réflechir pour le calcul de la distance par métro
{
    double dx = this->position_x - Lieubis.position_x;
    double dy = this->position_y - Lieubis.position_x;
    return sqrt(dx*dx + dy*dy); 
}


void Lieu::saisir()
{
    cout << "Tapez l'abscisse : ";  cin >> this->position_x;
    cout << "Tapez l'ordonnée : ";  cin >> this->position_y;
} 

void Lieu::afficher() const
{
    cout << "L'abscisse vaut " << this->position_x << endl;
    cout << "L'ordonnée vaut " << this->position_y << endl;
}

