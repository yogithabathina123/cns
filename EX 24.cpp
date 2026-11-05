#include <stdio.h>

int main()
{
    int n=3599, e=31, p, q, phi;
    int d;

    for(p=2;p<n;p++)
        if(n%p==0)
        {
            q=n/p;
            break;
        }

    phi=(p-1)*(q-1);

    for(d=1;d<phi;d++)
        if((d*e)%phi==1)
            break;

    printf("p = %d\n",p);
    printf("q = %d\n",q);
    printf("Phi(n) = %d\n",phi);
    printf("Public Key = (%d,%d)\n",e,n);
    printf("Private Key = (%d,%d)\n",d,n);

    return 0;
}
