#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long i = 19, n=0;
    double w[25] = {0}, v[25] = {0}, u[25] = {1,1}, phi = 0;

    // Présentation de l'exercice
    printf("SUITE DE FIBONNACCI\n\n\n");
    printf("Exercices de premiere S\n\n");

    //Question 1
    printf("Question 1 : Calculer les 21 premiers termes de la suite >> u(n+2) = u(n+1) + u(n)\n");
    printf("Reponse : Les 21 premiers termes sont\n");
    printf("u0 : %lf\nu1 : %lf", u[0], u[1]);
    for(n=0 ; n < i ; n++)
    {
        u[n+2] = u[n+1] + u[n] ;
        printf("\nu%ld : %lf", n+2, u[n+2]);
    }

    // Question 2
    printf("\n\n\nQuestion 2 : Calculer les 20 premiers termes de la suite puis conjecturer >> w(n) = ((1+racine5)exp(n+1) - (1-racine5)exp(n+1)) / (2exp(n+1)racine5)\n");
    printf("Reponse : les 20 premiers termes sont\n");
    i = 20 ;
    for(n=0 ; n < i ; n++)
    {
        w[n] = (pow((1 + sqrt(5)), n+1) - pow((1 - sqrt(5)), n+1)) / (pow(2, n+1) * sqrt(5));
        printf("\nw%ld : %lf", n, w[n]);
    }

    // Question 3
    printf("\n\n\nQuestion 3 : Calculerles 20 premiers termes de la suite puis conjecturer >> v(n) = (u(n+1)) / u(n)");
    printf("Reponse : les 20 premiers termes sont\n");
    for(n=0 ; n < i ; n++)
    {
        v[n] = (u[n+1]) / u[n] ;
        printf("\nv%ld : %lf", n, v[n]);
    }
    phi = (1 + sqrt(5)) / 2 ;
    printf("\n\nle nombre d'or (phi) approximativement : %lf", phi);

    printf("\n\n\n\n\n\nFIN DE L'EXERCICE");

    return 0;
}
