#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note[5];
    float somme, moyenne;
    int i;
    float max, min;


    for(i =0; i<5; i++)
    {
        printf("Entree la note %d :\n", i+1);
        scanf("%f", &note[i]);
    }
    somme=0;
    for(i=0; i<5; i++)
    {
        somme = somme + note[i];
    }
    printf("le totale des notes est %.2f\n", somme);

    moyenne = somme / 5;
    printf("la moyenne des notes est %.2f\n", moyenne);



    max = note[0];
    for(i = 1; i < 5; i++) {
    if(note[i] > max) {
        max = note[i];
    }
    }
    printf("la note la plus haute est %.2f\n", max);

    min= note[0];



    min = note[0];
    for(i = 1; i < 5; i++) {
        if(note[i] < min) {
        min = note[i];
        }
    }


    if (moyenne>=90) printf("Excellent");
    else if(moyenne>=80 && moyenne <90)   printf("Tres bien\n");
    else if (moyenne >= 70 && moyenne <80) printf("Bien\n");
    else if (moyenne>=60 && moyenne <70 ) printf ("Passable\n");
    else if (moyenne<60) printf ("Echec\n");


    if (somme>= 50) printf("reussi\n");
    else{
        printf("echoue\n");
    }


    return 0;
}
