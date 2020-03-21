#include <stdio.h>
#define N 5

// Factorisation du code avec un "callback"

int multiplier(int e, int option)
{
    int r;
    return r = e * option;
}

int square(int e)
{
    int r;
    return r = e * e;
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
    int e[5] = {1, 5, 2, 4, 3};
    int r_double[N];
    int option = 2;
    operation(e, r_double, &multiplier, option); // r_double contiendra {2, 10, 4, 8, 6}
    int r_triple[N];
    option = 3;
    operation(e, r_triple, &multiplier, option); // r_triple contiendra {3, 15, 6, 12, 9}
    int r_square[N];
    option = 2;
    operation(e, r_square, &square, option); // r_square contiendra {1, 25, 4, 16, 9}
    int r_maximize3[N];
    option = 3;
    operation(e, r_maximize3, &maximize, option); // r_maximize3 contiendra {1, 3, 2, 3, 3}
    return (0);
}