#include <stdio.h>

int main() {
    // Factorielle de N = N * (N - 1) * (N - 2) * (N * i) * ... * 1
    int n = 5;
    int factorielle = 0;

    // Calcul de la factorielle de n : méthode bouclage "while"
    int i = n;
    while (i > 0) {
        if (factorielle == 0) {
            factorielle = i;
        }
        else {
            factorielle = factorielle * i;
        }
        i--;
    }
    // Affichage du résultat
    printf(" La factorielle de  %d est égale à %d\n", n, factorielle);

    return 0;
}