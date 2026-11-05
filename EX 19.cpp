#include <stdio.h>
#include <string.h>

int main()
{
    int p[4], c[4], key=7, iv=5, i;

    printf("Enter 4 plaintext blocks:\n");
    for(i=0;i<4;i++)
        scanf("%d",&p[i]);

    printf("\nCBC Encryption:\n");

    for(i=0;i<4;i++)
    {
        int x = p[i] ^ iv;
        c[i] = x ^ key;   // Simplified encryption
        iv = c[i];
        printf("Ciphertext C%d = %d\n",i+1,c[i]);
    }

    return 0;
}
