#include <stdio.h>

int main() {
    int n, original;
    int count = 0;
    // Lire le nombre
    scanf("%d", &n);
   original = n; // Pour l'affichage final

    // Cas particulier : si le nombre est 0
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }

    // Affichage du résultat
    printf("%d contient %d chiffre(s).\n", original, count);  
    return 0;
}
