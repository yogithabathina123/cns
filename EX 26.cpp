#include <stdio.h>

int main()
{
    int p=11, q=13, n, phi, e=7, d=0, i;

    n=p*q;
    phi=(p-1)*(q-1);

    for(i=1;i<phi;i++)
        if((e*i)%phi==1)
        {
            d=i;
            break;
        }

    printf("Public Key: (%d,%d)\n",e,n);
    printf("Private Key: (%d,%d)\n",d,n);

    return 0;
}
