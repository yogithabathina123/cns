#include <stdio.h>

int gcd(int a, int b)
{
    while(b)
    {
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main()
{
    int n, e, m, g;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter public key e: ");
    scanf("%d",&e);

    printf("Enter plaintext block: ");
    scanf("%d",&m);

    g=gcd(m,n);

    printf("GCD = %d\n",g);

    if(g>1 && g<n)
        printf("Factor found: RSA modulus is compromised!\n");
    else
        printf("No common factor found.\n");

    return 0;
}
