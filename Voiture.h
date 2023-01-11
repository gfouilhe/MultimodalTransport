#pragma once
#include "MoyenTransport.h"
#include <iostream>
#include <string>

using namespace std;
class Voiture : public MoyenTransport {

public:
    Voiture();
    Voiture(string nom, double vitesse);
} ;