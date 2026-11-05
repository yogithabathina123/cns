#include <stdio.h>

int main()
{
    int p[4], ecb[4], cbc[4], cfb[4];
    int key=7, iv=5, i;

    printf("Enter 4 plaintext blocks:\n");
    for(i=0;i<4;i++)
        scanf("%d",&p[i]);

    printf("\nECB Mode:\n");
    for(i=0;i<4;i++)
    {
        ecb[i]=p[i]^key;
        printf("%d ",ecb[i]);
    }

    printf("\nCBC Mode:\n");
    for(i=0;i<4;i++)
    {
        cbc[i]=(p[i]^iv)^key;
        iv=cbc[i];
        printf("%d ",cbc[i]);
    }

    printf("\nCFB Mode:\n");
    iv=5;
    for(i=0;i<4;i++)
    {
        cfb[i]=p[i]^(iv^key);
        iv=cfb[i];
        printf("%d ",cfb[i]);
    }

    return 0;
}
