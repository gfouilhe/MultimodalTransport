#include "Metro.h"
#include <string>
#include <iostream>

using namespace std;

// Constructeur
Metro::Metro(string nom, int max, double vitesse) : MoyenTransport(nom, vitesse) {
  this->nbMaxStations = max;
  this->nbStations = 0;
  tab = new Lieu[nbMaxStations];
}

Metro::Metro() : MoyenTransport("default metro", 5.0) {
  this->nbMaxStations = 5;
  this->nbStations = 0;
  tab = new Lieu[nbMaxStations];
}

// Destructeur
Metro::~Metro() {
  delete[] this->tab;
}

// Surcharge de afficher
void Metro::afficher() const {
    
    cout << "Ligne de metro " << nom << endl;
    cout << " Vitesse : " << vitesse << " km/h, Nombre de Stations : " << nbStations << endl;
    for (int i = 0; i < nbStations; i++) {
        cout << tab[i] << endl;
    }
    cout << endl;
}

// Ajout d'une station à la fin de la ligne
void Metro::ajouterStation(Lieu station) {
  if (nbStations < nbMaxStations) {
    tab[nbStations] = station;
    nbStations++;
  }
}

// Ajout d'une station à l'index specifie
void Metro::ajouterStation(Lieu station, int index) {
    if (index < 0 || index > nbStations) {
        cout << "L'index specifie n'est pas valide." << endl;
    }
    else {
    if (nbStations < nbMaxStations) {
      // Decalage des elements du tableau à partir de l'index specifie
      for (int i = nbStations; i > index; i--) {
        tab[i] = tab[i-1];
      }
      // Ajout de la nouvelle station à l'index specifie
      tab[index] = station;
      nbStations++;
    }
  }
}

// Suppression d'une station de la ligne
void Metro::supprimerStation(Lieu station) {
  int index = indexStation(station);
  if (index != -1) {
    // Decalage des elements du tableau à partir de l'index de la station à supprimer
    for (int i = index; i < nbStations-1; i++) {
      tab[i] = tab[i+1];
    }
    nbStations--;
  }
  else {
    cout << "La station specifiee n'appartient pas à cette ligne de metro." << endl;
  }
}

// Verification si une station appartient à la ligne de metro
bool Metro::appartientStation(Lieu station) {
    for (int i = 0; i < nbStations; i++) {
        if (tab[i] == station) {return true;}
    }
    return false;
}

int Metro::indexStation(Lieu station) {
    if (appartientStation(station)) {
        for (int i = 0; i < nbStations; i++) {
            if (tab[i] == station) {return i;}
        }
    }
    
    cout << "La station specifiee n'appartient pas à cette ligne de metro." << endl;
    return -1;
}

Lieu Metro::stationIndex(int index){
    if (index < nbStations) {
        return tab[index];
    }
    else {
        cout << "L'index depasse le nombre de station." << endl;
        return tab[0];
    }
}


double Metro::distance(Lieu &dep, Lieu &dest){
  if (! (appartientStation(dep) && appartientStation(dest))) {
    cout << "L'une des deux stations n'appartiennent pas à la ligne de métro" << endl;
    return 999999.0;
  }
  int idxstart;
  int idxend;
  idxstart = indexStation(dep);
  idxend = indexStation(dest);
  double dist = 0.0;
  for (int i = idxstart; i < idxend; i++) {
    dist += tab[i].distance(tab[i+1]);
  }
  return dist;
}