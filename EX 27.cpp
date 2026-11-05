#include <stdio.h>

int main()
{
    int p=11, q=13, n, phi, e=7, d=0;
    int m, c, i;

    n=p*q;
    phi=(p-1)*(q-1);

    for(i=1;i<phi;i++)
        if((e*i)%phi==1)
        {
            d=i;
            break;
        }

    printf("Enter plaintext (0-25): ");
    scanf("%d",&m);

    c=1;
    for(i=0;i<e;i++)
        c=(c*m)%n;

    printf("Encrypted value = %d\n",c);

    m=1;
    for(i=0;i<d;i++)
        m=(m*c)%n;

    printf("Decrypted value = %d\n",m);

    return 0;
}
