/**
 * @file suite_de_fibonacci.cpp
 * @author Simon L'HINGUERAT && Jean-Marc KERVIL  (you@domain.com)
 * @brief Ce programme permet de générer les 20 premiers nombres de la suite de Fibonacci
 * @version 0.1
 * @date 2025-10-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <array>

using namespace std;
//boucle principale
int main() {
    array <int,20> fibu; // déclaration du tableau qui va acceuillir les 20 premiers nombres de la suite de Monsieur Fibonnacci 
    fibu[0]=0;
    fibu[1]=1;
    // ajout et calcul des 20 premiers caractères dans le tableau
    for (int i = 2;i < 20;i++){ 
        fibu[i] = fibu[i-1] + fibu[i-2];

    } 
    // affichages des 20 caractères dans le terminal 
    for (int i = 0;i <20;i++)
    { 
        cout<< "u"<< i << " = ";
        cout<<fibu[i] <<endl;
    } 

    return 0;
}
  