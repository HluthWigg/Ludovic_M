#define N 5

// Factorisation du code avec la structure "switch"

void map (int operation, int e[], int r[]) {
    int elements = 5;
    int n;
    switch (operation) {
        case 1 :
            for (n = 0; n < elements; n++)
            {
              r[n] = e[n] * 2;
            }
            break;

        case 2 :
            for (n = 0; n < elements; n++)
            {
                r[n] = e[n] * 3;
            }
            break;
        case 3 :
            for (n = 0; n < elements; n++)
            {
                r[n] = e[n] * e[n];
            }
            break;
        case 4 :
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
            break;
        default :
            break;
    }
}

int main() {
    int e[5] = {1, 5, 2, 4, 3};
    int r_double[N];
    map(1, e, r_double); // r_double contiendra {2, 10, 4, 8, 6}
    int r_triple[N];
    map(2, e, r_triple); // r_triple contiendra {3, 15, 6, 12, 9}
    int r_square[N];
    map(3, e, r_square); // r_square contiendra {1, 25, 4, 16, 9}
    int r_maximize3[N];
    map(4, e, r_maximize3); // r_maximize3 contiendra {1, 3, 2, 3, 3}
    return (0);
}