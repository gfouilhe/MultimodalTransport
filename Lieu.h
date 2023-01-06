#include <string>

using namespace std;


class Lieu {
    string nom;
    double position_x;
    double position_y;
    double altitude;
    bool voiture;
    bool velo;
    bool metro;
    bool pieds;
    
public:
    // Constructeurs
  Lieu();
  Lieu(string nom, double position_x, double position_y, double altitude, bool voiture, bool velo, bool metro, bool pieds);

  //Accesseurs et mutateurs
  void setNom(string nom);
  void setX(double position_x);
  void setY(double position_y);
  void setAltitude(double altitude);
  void setVoiture(bool voiture);
  void setVelo(bool velo);
  void setMetro(bool metro);
  void setPieds(bool pieds);
  string getNom() const;
  double getX() const;
  double getY() const;
    
  //Autre fonction
  double distance(const Lieu &Lieubis) const;
  
  void saisir();
  void afficher() const;
} ;
