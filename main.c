#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totnotes;

    printf("combien de notes faut-il calculer: \n");
    scanf("%d", &totnotes);

    float note[totnotes];
    float somme = 0, moyenne;
    int i;
    float max, min;


    for(i =0; i<totnotes; i++)
    {
        printf("Entrer la note %d :\n", i+1);
        scanf("%f", &note[i]);
        somme = somme + note[i];
    }
    printf("le totale des notes est %.2f\n", somme);

    moyenne = somme / totnotes;
    printf("la moyenne des notes est %.2f\n", moyenne);



    max = note[0];
    min = note[0];
    for(i = 1; i < totnotes; i++) {
        if(note[i] > max) {
            max = note[i];
        }
        if(note[i] < min) {
            min = note[i];
        }
    }
    printf("la note la plus haute est %.2f\n", max);
    printf("la note la plus basse est %.2f\n", min);

    if (moyenne>=90) printf("Excellent\n");
    else if(moyenne>=80 && moyenne <90)   printf("Tres bien\n");
    else if (moyenne >= 70 && moyenne <80) printf("Bien\n");
    else if (moyenne>=60 && moyenne <70 ) printf ("Passable\n");
    else if (moyenne<60) printf ("Echec\n");


    if (moyenne>= 50) {
        printf("reussi\n");
    }
    else{
        printf("echoue\n");
    }

    return 0;
}
