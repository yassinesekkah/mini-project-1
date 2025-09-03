#include <stdio.h>
#include <stdlib.h>

int main()
{
    float note[5];
    float somme, moyenne;
    int i;
    int max, min;


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

    max= note[0];

    for(i=1; i<5; i++)
    {
        if (note[i]<note[i+1])
        {
            max= note[i+1];
        }

    }

    /*if (note[0]<note[1]) max = i[1];
     if (note[1]<note[2]) max = i[2];
      if (note[2]<note[3]) max = i[3];
       if (note[3]<note[4]) max = i[4];*/


    printf("la note la plus haute est %d\n", max);

    min= note[0];

    for(i=1; i<5; i++)  //3ad 9rit les tableaux sbah makanch 3lia nekhdam bihoum had lboucle ma9dnich lwa9t nchouf m3aha
    {
        if (note[i]>note[i+1])
        {
            min= note[i+1];
        }
    }printf("la note la plus basse est %d\n", min);



    if (somme>=90) printf("Excellent");
    else if(somme>=80 && somme <90)   printf("Tres bien\n");
    else if (somme >= 70 && somme <80) printf("Bien\n");
    else if (somme>=60 && somme <70 ) printf ("Passable\n");
    else if ( somme<60) printf ("Echec\n");


    if (somme>= 50) printf("reussi\n");
    else{
        printf("echoue\n");
    }


    return 0;
}
