#include "Armure.hpp"


class Inventaire
{
private:
    std::map<std::string, Objet> m_inventaire; 
    int m_poidsTotal;
    int m_poidsmax ;



public:
    Inventaire();
    Objet getObjet(std::string nom);
    std::map<std::string, Objet> getMap();
    void addObjet(Objet obj);
    void throwObjet(std::string nom);
    void afficherInventaire();
    int getPoidsTotal();
    void setPoidsMax(int poids);
    int getPoidsMax();
    bool deja_present(Objet obj);
    ~Inventaire(){};

};