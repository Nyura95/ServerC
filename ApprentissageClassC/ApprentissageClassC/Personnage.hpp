//
//  Personnage.hpp
//  ApprentissageClassC
//
//  Created by Courapied on 18/04/2017.
//  Copyright © 2017 Courapied. All rights reserved.
//

#ifndef Personnage_hpp
#define Personnage_hpp

#include <string>

class Personnage {
public:
    std::string recupererNomPersonnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();
    int vieActuel();
    Personnage(std::string m_nomPersonnage, std::string m_nomArme, int degatsArme, int vie, int mana);
    ~Personnage();
private:
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme = 10;
    std::string m_nomPersonnage;
};

#endif /* Personnage_hpp */
