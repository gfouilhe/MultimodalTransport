class Utilisateur {

    string nom;
    Voiture voiture;
    bool possedeVoiture;
    bool possedeAbonnementMetro;
    bool peutMarcher;


public:
    Utilisateur();
    Utilisateur(string nom, bool possedeAbonnementMetro);
    void ajouterVoiture(Voiture &v);
    void nePeutPlusMarcher();

    string getNom();
    Voiture getVoiture();
    bool getPossedeVoiture();
    bool getPossedeAbonnementMetro();
    bool getpeutMarcher();

} ;