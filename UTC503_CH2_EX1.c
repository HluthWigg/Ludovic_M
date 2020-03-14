#include <stdio.h>

int main() {
    // Factorielle de N = N * (N - 1) * (N - 2) * (N * i) * ... * 1
    int n = 5;
    int i = n;
    int factorielle = 0;

    // Calcul de la factorielle de n : méthode "goto et if/else"
    calcul:
    if (i > 0) {
        if (factorielle == 0) {
            factorielle = i;
        }
        else {
            factorielle = factorielle * i;
        }
        i--;
        goto calcul;
    }
    else {
        goto resultat;
    }

    // Affichage du résultat
    resultat:
    printf(" La factorielle de  %d est égale à %d\n", n, factorielle);

    return 0;
}