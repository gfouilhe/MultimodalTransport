#pragma once
#include "MoyenTransport.h"
#include <string>
class Velo : public MoyenTransport {
    
public:
    Velo();
    Velo(string nom, double vitesse);
} ;