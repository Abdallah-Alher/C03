#include <stdio.h>

int main() {
    int n, original, reverse = 0;
    // Lire l'entier
    scanf("%d", &n);
    original = n; // Pour garder la valeur d'origine (optionnel ici)
    // Traitement : inversion
    while (n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    // Affichage
    printf("Nombre inversé : %d\n", reverse);
    return 0;
}