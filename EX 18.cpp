#include <stdio.h>

int main()
{
    int key[56], C[28], D[28], i, r, s;
    
    printf("Enter 56-bit key (0 or 1):\n");
    for(i=0;i<56;i++)
        scanf("%d",&key[i]);

    for(i=0;i<28;i++)
    {
        C[i]=key[i];
        D[i]=key[i+28];
    }

    for(r=0;r<16;r++)
    {
        s=(r==0||r==1||r==8||r==15)?1:2;

        while(s--)
        {
            int t=C[0],u=D[0];
            for(i=0;i<27;i++)
            {
                C[i]=C[i+1];
                D[i]=D[i+1];
            }
            C[27]=t;
            D[27]=u;
        }

        printf("\nRound %d Subkey: ",r+1);

        for(i=0;i<24;i++)
            printf("%d",C[i]);

        for(i=0;i<24;i++)
            printf("%d",D[i]);
    }

    return 0;
}
