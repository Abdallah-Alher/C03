#include <stdio.h> // Bibliothèque d'entrer et sortie.
int main () {  // Début du programme.
    int n;
    int a = 0, b = 1, Suivant;

        scanf("%d", &n); // Lecture de la valeur limite
        printf("Fibonacci : "); // Affichage du premier nombre
        // Génération des termes
        while (a <= n) {
            printf("%d ", a);
            Suivant = a + b;
            a = b;
            b = Suivant;
        }
            return 0;
}