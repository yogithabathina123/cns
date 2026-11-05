#include <stdio.h>

int main()
{
    int K[16], i;

    printf("Enter 16 encryption keys:\n");
    for(i=0; i<16; i++)
        scanf("%d", &K[i]);

    printf("\nDecryption key schedule:\n");

    for(i=15; i>=0; i--)
        printf("K%d = %d\n", i+1, K[i]);

    return 0;
}
