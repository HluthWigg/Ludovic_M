#include <stdio.h>

int factorielle(int n) {
    int i;
    for (i = 1; i < n + 1; i++) {
        n = n * i;
    }
    return factorielle(n);
}

int main() {
    // Factorielle de N = N * (N - 1) * (N - 2) * (N * i) * ... * 1
    int n = 5;

    // Calcul de la factorielle de n : méthode "fonction" et affichage du résultat
    printf(" La factorielle de  %d est égale à %d\n", n, factorielle(n));

    return 0;
}