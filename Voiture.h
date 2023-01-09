class Voiture : public MoyenTransport {

    Utilisateur proprietaire;

public:
    Voiture();
    Voiture(Utilisateur &user, string nom, float vitesse);
    Utilisateur getProprietaire();
    
} ;