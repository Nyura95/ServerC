//
//  Personnage.cpp
//  ApprentissageClassC
//
//  Created by Courapied on 18/04/2017.
//  Copyright © 2017 Courapied. All rights reserved.
//

#include "iostream"
#include "Personnage.hpp"

using namespace std;

Personnage::Personnage(string nomPersonnage, string nomArme, int degatsArme, int vie, int mana) {
    m_nomPersonnage = nomPersonnage;
    changerArme(nomArme, degatsArme);
    m_vie = vie;
    m_mana = mana;
}

Personnage::~Personnage() {
    cout << "Lol" << endl;
}

void Personnage::recevoirDegats(int nbDegats) {
    m_vie -= nbDegats;
    if(m_vie < 0) {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible) {
    cout << m_nomPersonnage << " attaque " << cible.recupererNomPersonnage() << " pour " << m_degatsArme << " dégats" << endl;
    cible.recevoirDegats(m_degatsArme);
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie += quantitePotion;
    if(m_vie > 100) {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme) {
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant() {
    return m_vie > 0; // Renvoie true si m_vie est sup a 0
}

int Personnage::vieActuel() {
    return m_vie;
}

string Personnage::recupererNomPersonnage() {
    return m_nomPersonnage;
}

