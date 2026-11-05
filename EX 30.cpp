#include <stdio.h>

int main()
{
    int K, X, T, Y, C1, C2;

    printf("Enter key K: ");
    scanf("%d",&K);

    printf("Enter message X: ");
    scanf("%d",&X);

    T = X ^ K;       // MAC of one block

    Y = X ^ T;       // Second message block

    C1 = X ^ K;
    C2 = Y ^ C1 ^ K;

    printf("MAC of X = %d\n",T);
    printf("Second block = %d\n",Y);
    printf("MAC of X || (X XOR T) = %d\n",C2);

    return 0;
}
