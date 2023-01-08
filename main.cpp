#include "Lieu.h"
#include "MoyenTransport.h"
#include "Marcher.h"
#include "Metro.h"
#include "Velo.h"
#include "Voiture.h"
#include "Utilisateur.h"
#include <iostream>

using namespace std;

// Creation de lieux
Lieu gare("Gare",10,-10,0,false,true,true,true); 
Lieu univ("Université",-10,-10,0,true,true,true,true);
Lieu colline("Colline",-10,0,0,true,false,false,true);
Lieu zoneIndus("Zone Industrielle",10,10,0,true,false,false,false);
Lieu centre("Centre Ville",0,0,0,false,false,true,true)
// Création de l'utilisateur
Utilisateur Nico("Nicolas",true);

Velo velo(2.0);
Nico.ajouterVelo(velo);






