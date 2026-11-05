#include <stdio.h>

int main()
{
    int p[4]={0,1,2,3};
    int c[4], d[4];
    int iv=10, key=5, i;

    printf("CBC Encryption:\n");

    for(i=0;i<4;i++)
    {
        c[i]=(p[i]^iv)^key;
        iv=c[i];
        printf("%d ",c[i]);
    }

    printf("\n\nCBC Decryption:\n");

    iv=10;

    for(i=0;i<4;i++)
    {
        d[i]=(c[i]^key)^iv;
        iv=c[i];
        printf("%d ",d[i]);
    }

    return 0;
}
