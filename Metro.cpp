#include "Metro.h"
#include "Lieu.h"
#include <string>
#include <iostream>

using namespace std;

// Constructeur
Metro::Metro(string nom, int max, double vitesse) : MoyenTransport(nom, vitesse) {
  this->nbMaxStations = max;
  this->nbStations = 0;
  tab = new Lieu[nbMaxStations];
}

// Destructeur
Metro::~Metro() {
  delete[] this->tab;
}

// Surcharge de afficher
void Metro::afficher() const {
    
    cout << "=====================================" << endl;
    cout << "Ligne de métro " << nom << " avec une vitesse de " << vitesse << " km/h, comportant " << nbStations << " stations :" << endl;
    for (int i = 0; i < nbStations; i++) {
        cout << tab[i] << endl;
    }
    cout << "=====================================" << endl;
}

// Ajout d'une station à la fin de la ligne
void Metro::ajouterStation(Lieu station) {
  if (nbStations < nbMaxStations) {
    tab[nbStations] = station;
    nbStations++;
  }
}

// Ajout d'une station à l'index spécifié
void Metro::ajouterStation(Lieu station, int index) {
    if (index < 0 || index > nbStations) {
        cout << "L'index spécifié n'est pas valide." << endl;
    }
    else {
    if (nbStations < nbMaxStations) {
      // Décalage des éléments du tableau à partir de l'index spécifié
      for (int i = nbStations; i > index; i--) {
        tab[i] = tab[i-1];
      }
      // Ajout de la nouvelle station à l'index spécifié
      tab[index] = station;
      nbStations++;
    }
  }
}

// Suppression d'une station de la ligne
void Metro::supprimerStation(Lieu station) {
  int index = indexStation(station);
  if (index != -1) {
    // Décalage des éléments du tableau à partir de l'index de la station à supprimer
    for (int i = index; i < nbStations-1; i++) {
      tab[i] = tab[i+1];
    }
    nbStations--;
  }
  else {
    cout << "La station spécifiée n'appartient pas à cette ligne de métro." << endl;
  }
}

// Vérification si une station appartient à la ligne de métro
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
    else {
        cout << "La station spécifiée n'appartient pas à cette ligne de métro." << endl;
        return -1;
    }
}

Lieu Metro::stationIndex(int index){
    if (index < nbStations) {
        return tab[index];
    }
    else {
        cout << "L'index dépasse le nombre de station." << endl;
        return tab[0];
    }
}