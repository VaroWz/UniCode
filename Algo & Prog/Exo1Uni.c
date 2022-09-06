//
// Created by antoi on 05/09/2022.
//
#include <stdio.h>
int main(){

    printf("Saisissez deux entiers\n");
    float v;
    float x;

    scanf("%f", &v);
    scanf("%f", &x);

    printf("Les deux entiers sont: %f et %f\n", v, x);

    float result = v*x;
    printf("Le produit des deux entiers sont: %f\n", result);

}
