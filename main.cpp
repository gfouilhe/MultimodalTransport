#include "Lieu.h"
#include "MoyenTransport.h"
#include "Marcher.h"
#include "Metro.h"
#include "Velo.h"
#include "Voiture.h"
#include "Utilisateur.h"
#include <iostream>

using namespace std;


int main() {

// Creation de lieux
Lieu gare("Gare",10,-10,0,false,true,true,true); 
Lieu univ("Université",-10,10,0,true,true,true,true);
Lieu colline("Colline",-10,0,0,true,false,false,true);
Lieu zoneIndus("Zone Industrielle",10,10,0,true,false,false,false);
Lieu centre("Centre Ville",0,0,0,false,false,true,true);


// Creation du métro
Metro metro("Ligne 1",5,5);
metro.ajouterStation(univ);
metro.ajouterStation(centre);
metro.ajouterStation(gare);
cout << metro << endl;


// Création de l'utilisateur
Utilisateur user("Nicolas",true);

Velo velo(2.0);
user.ajouterVelo(velo);

cout << user << endl;
};



