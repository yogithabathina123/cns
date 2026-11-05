#include <stdio.h>

int main()
{
    int p[3]={1,2,4}, c[3], d[3];
    int key=5, i;

    printf("CTR Encryption:\n");
    for(i=0;i<3;i++)
    {
        c[i]=p[i]^(i^key);
        printf("%d ",c[i]);
    }

    printf("\nCTR Decryption:\n");
    for(i=0;i<3;i++)
    {
        d[i]=c[i]^(i^key);
        printf("%d ",d[i]);
    }

    return 0;
}
