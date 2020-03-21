#include <stdio.h>
#include <math.h>
#define N 5

// Factorisation du code avec un "callback"

int multiply(int e, int option)
{
    int r;
    return r = e * option;
}

int power(int e, int option)
{
    int r;
    return r = pow(e,option);
}

int maximize(int e, int option)
{
    int r;
    if (e > option)
    {
        r = 3;
    }
    else
    {
        r = e;
    }
    return r;
}

int operation(int e[], int r[], int (*ptr)(), int option)
{
    int elements = N;
    int n;
    for (n = 0; n < elements; n++)
    {
       r[n] = (*ptr)(e[n], option);
    }
    return r[n];
}

int main()
{
    int e[5] = {1, 5, 2, 4, 3};                 // tableau d'éléments
    int r_double[N];                            // r_double contiendra {2, 10, 4, 8, 6}
    operation(e, r_double, &multiply, 2);
    int r_triple[N];                            // r_triple contiendra {3, 15, 6, 12, 9}
    operation(e, r_triple, &multiply, 3);
    int r_square[N];                            // r_square contiendra {1, 25, 4, 16, 9}
    operation(e, r_square, &power, 2);
    int r_maximize3[N];                         // r_maximize3 contiendra {1, 3, 2, 3, 3}
    operation(e, r_maximize3, &maximize, 3);
    return (0);                                 
}