    /**
    * @file donnees_issues_de_capteurs.cpp
    * @author Simon L'HINGUERAT && Jean-Marc KERVIL  (you@domain.com)
    * @brief Ce programme de récuperation des données d'un capteur pour en sortir le max, le min et la moyenne
    * @version 0.1
    * @date 2025-10-02
    * 
    * @copyright Copyright (c) 2025
    * 
    */
    #include <iostream>
    #include <vector>


    using namespace std;

    int main(){
        //déclaration des variable nécessaire
        int saisie, max=0, min, somme=0, compte=0;
        
    
        while(1){
            //récupération d'une nouvelle valeur
            cin >> saisie;

            //vérification du caractère de fin de transmition, ici -1
            if(saisie == -1){
                break;
            }

            //controle que la nouvelle valeur est soit plus petite que le minimun précédant ou plus grand que le maximun précédant
            if( saisie  > max){max = saisie;}
            if (saisie < min){min = saisie;}

            //mise à jour des valeur nécessaire au calcul de la moyenne de l'ensemble des valeurs
            somme += saisie;
            compte++;
        }
        
        // sortie de la boucle, affichage des informations
        cout << "maximun = " << max << endl;
        cout << "minimun = " << min << endl;
        cout << "moyenne = " << (float) somme/compte << endl;

        return 0;

    }