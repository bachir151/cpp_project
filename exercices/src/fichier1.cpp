#include "../include/fichier1.h"
#include "../include/fichier2.h"
#include <iostream>

void fonction1() {
    std::cout << "Fonction 1 exécutée." << std::endl;
}

void fonction3() {
    for (int i =0; i < 5; i++){
        std::cout << "La fonction 3 exécution : " << i << std::endl;
    }
}


void maxi_min (){
    
    int note;
    int cpt_max = 0;
    int cpt_min = 0;
    int max = 0 ;
    int min = 0 ;
    bool stop = false;
    int premiere_fois = 0;
    
    // Lire la première note
    std::cout << "Entrez une note (-1 pour finir) : ";
    std::cin >> note;

    // Vérifier si la première note est négative (pas de notes valides)
    if (note < 0) {
        std::cout << "Aucune note valide" << std::endl;
        return;
    }

    while (stop == false){
        std::cout << "Saisissez une note : " ; std::cin >> note;
        
        //On fixe dès le début la première entrée comme maximum et minimum
        if (premiere_fois==0){
            max = note;
            min = note;
            premiere_fois=1;
        }

        if (note<0){
            stop = true;
        }
        else{
            if (note > max){
                max=note;
                cpt_max=1;
            }

            if (note == max ){
                cpt_max++;
            }


            if(note < min){
                min=note;
                cpt_min=1;
            }

            if (note == min){
                cpt_min ++;
            }
        }      

    }

  
    std::cout << "La note maximale : "<< max << " attribuée " << cpt_max << " fois"<< std::endl;
    std::cout << "La note minimale : "<< min << " attribuée " << cpt_min << " fois"<< std::endl;
}

