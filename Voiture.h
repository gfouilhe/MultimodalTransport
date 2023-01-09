#pragma once
#include "MoyenTransport.h"
#include <iostream>
using namespace std;
class Voiture : public MoyenTransport {

public:
    Voiture();
    Voiture(string nom, float vitesse);
} ;