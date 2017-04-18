//
//  main.cpp
//  ApprentissageClassC
//
//  Created by Courapied on 18/04/2017.
//  Copyright © 2017 Courapied. All rights reserved.
//

#include <iostream>
#include "Personnage.hpp"

using namespace std;


int main(int argc, const char * argv[]){
    Personnage david("David", "Dague", 20, 100, 100);
    Personnage goliath("Goliath", "Marteaux", 10, 100, 100);
    //Création de 2 objets de type Personnage : david et goliath
    
    
    goliath.attaquer(david);    //goliath attaque david
    david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david);    //goliath réattaque david
    david.attaquer(goliath);    //david contre-attaque... c'est assez clair non ?

    goliath.changerArme("Hache", 50);
    goliath.attaquer(david);
    printf("lol");
    
    cout << "Vie actuel de david : " << david.vieActuel() << endl;
    return 0;
}
