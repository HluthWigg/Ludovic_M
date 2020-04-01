#include <stdio.h>
#define N 5

// Aide : lire la ième case du tableau e : e[i]
// Aide : affecter la ième case du tableau r : r[i] = valeur;
// Aide : le tableau est accessible de 0 à N - 1, ie de e[0] à e[4] en l'occurence

void mapDouble(int e[], int r[]) {
    int elements = 5;
    int n;
    for (n = 0; n < elements; n++) {
        r[n] = e[n] * 2;
    }
}

void mapTriple(int e[], int r[]) {
    int elements = 5;
    int n;
    for (n = 0; n < elements; n++) {
        r[n] = e[n] * 3;
    }
}

void mapSquare(int e[], int r[]) {
    int elements = 5;
    int n;
    for (n = 0; n < elements; n++) {
        r[n] = e[n] * e[n];
    }
}

void mapMaximize3(int e[], int r[]) {
    int elements = 5;
    int n;
    for (n = 0; n < elements; n++)
    {
        if (e[n] > 3)
        {
            r[n] = 3;
        }
        else
        {
            r[n] = e[n];
        }
    }
}

int main() {
    int e[5] = {1, 5, 2, 4, 3};
    int r_double[N];
    mapDouble(e, r_double); // r_double contiendra {2, 10, 4, 8, 6}
    int r_triple[N];
    mapTriple(e, r_triple); // r_triple contiendra {3, 15, 6, 12, 9}
    int r_square[N];
    mapSquare(e, r_square); // r_square contiendra {1, 25, 4, 16, 9}
    int r_maximize3[N];
    mapMaximize3(e, r_maximize3); // r_maximize3 contiendra {1, 3, 2, 3, 3}
    return (0);
}