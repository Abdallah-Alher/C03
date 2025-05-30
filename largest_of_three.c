#include <stdio.h> // Bibliothèque d'entrer et sortie.

int main () {  // Début du programme.
    int a, b, c, max; // Déclaration des variables.
    scanf("%d %d %d", &a, &b, &c); // Lectures des valeurs saisis et stockage dans les variables.
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    printf("Le plus grand nombre est : %d\n", max);
    return 0;
}
