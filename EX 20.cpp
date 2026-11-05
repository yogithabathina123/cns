#include <stdio.h>

int main()
{
    int p[4], ecb[4], cbc[4], iv=5, key=7, i;

    printf("Enter 4 plaintext blocks:\n");
    for(i=0;i<4;i++)
        scanf("%d",&p[i]);

    printf("\nECB Encryption:\n");
    for(i=0;i<4;i++)
    {
        ecb[i]=p[i]^key;
        printf("%d ",ecb[i]);
    }

    printf("\n\nCBC Encryption:\n");
    for(i=0;i<4;i++)
    {
        cbc[i]=(p[i]^iv)^key;
        iv=cbc[i];
        printf("%d ",cbc[i]);
    }

    return 0;
}
