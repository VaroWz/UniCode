//
// Created by antoi on 14/09/2022.
//
#include <stdio.h>
int main(){

    printf("Bienvenue, lancement du programme...\n");

    int v;
    scanf("%i", &v);
    printf("%i\n", v);

    if(v < 0){
        printf("La valeur est negative\n");
    }
    else{
        printf("La valeur est positive\n");
    }
    if(v >= 5 && v <=20){
        printf("La valeur est comprise entre 5 et 20\n");
    }
    else if(v < 5){
        printf("La valeur est inferieur a 5\n");
    }
    else if(v > 20){
        printf("La valeur est supérieure a 20\n");
    }
    if(v >= 0){
        printf("Le double de la valeur est %i\n", v*2);
    }
    else{
        printf("L'oppose de la valeur est %i\n", v+(-v)-v);
    }
    int choix;
    printf("Tapez 1 pour ecrire le double de la valeur\nTapez 2 pour ecrire le triple de la valeur\nTapez 3 pour ecrire l'oppose de la valeur\n");
    scanf("%i", &choix);
    int multiple=0;
    int somme=0;
    int moyenne=0;
    switch (choix) {
        case 1:
            printf("Le double de la valeur est %i\n", v*2);
            break;
        case 2:
            printf("Le triple de la valeur est %i\n", v*3);
            break;
        case 3:
            printf("L'oppose de la valeur est %i\n", v+(-v)-v);
            break;
        case 4:
            if(v>0){
                for (int compteur = 0 ; compteur < v ; compteur++){
                    printf("%i\n", compteur+1);
                }
            }
            else {
                for (int compteur = 0; compteur > v; compteur--) {
                    printf("%i\n", compteur - 1);
                }
            }
            break;
        case 5:
            if(v>0){
                for (int compteur = 1; compteur*3 < v; ++compteur) {
                    printf("%i\n", (compteur)*3);
                }
            }
            else{
                for (int compteur = 1; compteur*3 > v; --compteur) {
                    printf("%i\n", compteur*3);
                }
            }
            break;
        case 6:
            if(v>0){
                for (int compteur = 1; compteur*3 < v; ++compteur) {
                    printf("%i\n", (compteur)*3);
                    multiple++;
                }
            }
            else{
                for (int compteur = 1; compteur*3 > v; --compteur) {
                    printf("%i\n", compteur*3);
                    multiple++;
                }
            }
            printf("Il y a %i multiples de 3 compris entre 1 et la valeur.\n", multiple);
            break;
        case 7:
            if(v>0){
                for (int compteur = 0 ; compteur < v ; compteur++){
                    printf("%i\n", compteur+1);
                    somme=somme+compteur;
                }
            }
            else {
                for (int compteur = 0; compteur > v; compteur--) {
                    printf("%i\n", compteur - 1);
                    somme=somme+compteur;
                }
            }
            printf("La somme des entiers compris entre 1 et la valeur est %i\n", somme);
            break;
        case 8:
            if(v>0){
                for (int compteur = 0 ; compteur < v ; compteur++){
                    printf("%i\n", compteur+1);
                    moyenne++;
                    somme=somme+compteur;
                }
            }
            else {
                for (int compteur = 0; compteur > v; compteur--) {
                    printf("%i\n", compteur - 1);
                    moyenne++;
                    somme=somme+compteur;
                }
            }
            printf("La moyenne de la somme des entiers compris entre 1 et cette valeur est %i\n", somme/moyenne);
            break;
        default:
            printf("Erreur: Vous n'avez pas saisi un bon chiffre.\n");
            break;
    }
    /*if(choix == 1){
        printf("Le double de la valeur est %i\n", v*2);
    }
    else if(choix == 2){
        printf("Le triple de la valeur est %i\n", v*3);
    }
    else if(choix == 3){
        printf("L'oppose de la valeur est %i\n", v+(-v)-v);
    }
    else{
        printf("Erreur: Vous n'avez pas saisi un bon chiffre.\n");
    }*/
    /*int somme = 0;
    int moyenne= 0;
    if(v>0){
        for (int compteur = 0 ; compteur < v ; compteur++){
            printf("%i\n", compteur+1);
            moyenne++;
            somme=somme+compteur;
        }
    }
    else {
        for (int compteur = 0; compteur > v; compteur--) {
            printf("%i\n", compteur - 1);
            moyenne++;
            somme=somme+compteur;
        }
    }
    int multiple= 0;
    if(v>0){
        for (int compteur = 1; compteur*3 < v; ++compteur) {
            printf("%i\n", (compteur)*3);
            multiple++;
        }
    }
    else{
        for (int compteur = 1; compteur*3 > v; --compteur) {
            printf("%i\n", compteur*3);
            multiple++;
        }
    }
    printf("Il y a %i multiples de 3 compris entre 1 et la valeur.\n", multiple);
    printf("La somme des entiers compris entre 1 et la valeur est %i\n", somme);
    printf("La moyenne de la somme des entiers compris entre 1 et cette valeur est %i\n", somme/moyenne);*/




}
