#include "Lieu.h"
#include "Utilisateur.h"
#include "Voiture.h"
#include "MoyenTransport.h"
#include "Marcher.h"
#include "Metro.h"
#include "Velo.h"
#include <iostream>
#include <string>

using namespace std;


int main() {

// Creation de lieux
Lieu gare("Gare",10,-10,0,false,true,true,true); 
Lieu univ("Universite",-10,10,0,true,true,true,true);
Lieu colline("Colline",-10,0,0,true,false,false,true);
Lieu zoneIndus("Zone Industrielle",10,10,0,true,false,false,false);
Lieu centre("Centre Ville",0,0,0,false,false,true,true);


double distGareUniv;

distGareUniv = gare.distance(univ);


cout << "Distance entre le lieu : " << gare << " et le lieu : " << univ << " = " << distGareUniv << endl;

// Creation du metro
Metro metro("Ligne 1",5,5);
metro.ajouterStation(univ);
metro.ajouterStation(centre);
metro.ajouterStation(gare);
// cout << metro << endl;


// Creation de l'utilisateur
Utilisateur user("Nicolas",true);

Velo velo;
Voiture voiture;

user.ajouterVelo(velo);
user.ajouterVoiture(voiture);
user.ajouterMetro(metro);

double tempsmetro;
double tempspieds;
tempsmetro = user.calculTransport(univ,gare,'m');
tempspieds = user.calculTransport(univ,gare,'p');
cout << tempsmetro << endl;
cout << tempspieds << endl;

return 0;
};



