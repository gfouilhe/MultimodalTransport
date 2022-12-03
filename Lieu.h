class Lieu {
    char nom;
    double position_x;
    double position_y;
    double Altitude;
    bool voiture;
    bool velo;
    bool metro;
    bool pieds;
    
public:
    // Constructeurs
  Lieu();
  Lieu(char nom, double position_x, double position_y, double Altitude, bool voiture, bool velo, bool metro, bool pieds);

  //Accesseurs et mutateurs
  void setX(double position_x);
  void setY(double position_y);
  double getX() const;
  double getY() const;
    
  //Autre fonction
  double distance(const Lieu &Lieubis) const;
  
  void saisir();
  void afficher() const;
} ;
