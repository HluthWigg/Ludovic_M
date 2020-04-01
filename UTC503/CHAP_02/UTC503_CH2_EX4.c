#include <stdio.h>

int factorielle(int n) {
    if (n == 1) {
        return n;
    }
    else {
        return n * factorielle(n-1);
    }
}

int main() {
    // Factorielle de N = N * (N - 1) * (N - 2) * (N * i) * ... * 1
    int n = 5;

    // Calcul de la factorielle de n : méthode "fonction" et affichage du résultat
    printf(" La factorielle de  %d est égale à %d\n", n, factorielle(n));

    return 0;
}