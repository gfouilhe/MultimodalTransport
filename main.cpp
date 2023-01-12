#include "Lieu.h"
#include "Utilisateur.h"
#include "Voiture.h"
#include "MoyenTransport.h"
#include "Marcher.h"
#include "Metro.h"
#include "Velo.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void Calcultotal(Utilisateur &user, Lieu &dep, Lieu dest) {

    double tmpsMetro = 999999.0;
    double tmpsVoiture = 999999.0;
    double tmpsVelo = 999999.0;
    double tmpsMarche = 999999.0;

    cout<<"Temps de trajet entre " << dep.getNom() << " et " << dest.getNom() <<" : "<<endl;
    if (user.getPossedeAbonnementMetro()) {
        tmpsMetro = user.calculTransport(dep, dest, 'm');
        cout << " - en utilisant le metro : " << tmpsMetro << " minutes" << endl;
    }
    if (user.getPossedeVoiture()) {
        tmpsVoiture = user.calculTransport(dep, dest, 'V');
        cout << " - en utilisant la voiture : " << tmpsVoiture << " minutes" << endl;
    }
    if (user.getpeutMarcher()) {
        tmpsMarche = user.calculTransport(dep, dest, 'p');
        cout << " - en marchant : " << tmpsMarche << " minutes" << endl;
    }
    if (user.getPossedeVelo()) {
        tmpsVelo = user.calculTransport(dep, dest, 'v');
        cout << " - en utilisant le velo : " << tmpsVelo << " minutes" << endl;
    }

    double minimum;

    const double tMetro = tmpsMetro;
    const double tVoiture = tmpsVoiture;
    const double tVelo = tmpsVelo;
    const double tMarche = tmpsMarche;

    minimum = min({tmpsMetro,tmpsVoiture,tmpsMarche,tmpsVelo});
    cout <<"Temps de trajet optimal entre " <<dep.getNom()<< " et " << dest.getNom() <<" : " ;
    cout << minimum << endl;
    cout << "En utilisant le moyen de transport : " ;
    if (minimum==tmpsMetro) {
        cout << "Metro" <<endl;
    }
    else if (minimum==tmpsMarche){
        cout << "Marche" << endl;
    }
    else if (minimum==tmpsVelo){
        cout << "Velo" << endl;
    }
    else if (minimum==tmpsVoiture){
        cout << "Voiture" << endl;
    }

}


int main() {

// Creation de lieux
Lieu gare("Gare",10,-10,0,false,true,true,true); 
Lieu univ("Universite",-10,10,0,true,true,true,true);
Lieu colline("Colline",-10,0,0,true,false,false,true);
Lieu zoneIndus("Zone Industrielle",10,10,0,true,false,false,false);
Lieu centre("Centre Ville",0,0,0,false,false,true,true);


double distGareUniv;

distGareUniv = gare.distance(univ);


cout << "Distance entre le lieu : " << gare.getNom() << " et le lieu : " << univ.getNom() << " = " << distGareUniv << endl;

// Creation du metro
Metro metro("Ligne 1",5,5.0);
metro.ajouterStation(univ);
metro.ajouterStation(centre);
metro.ajouterStation(gare);
cout << metro << endl;


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

Calcultotal(user,univ,gare);

return 0;
};



