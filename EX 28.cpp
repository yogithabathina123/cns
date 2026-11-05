#include <stdio.h>

int power(int a, int b, int q)
{
    int r=1;
    while(b--)
        r=(r*a)%q;
    return r;
}

int main()
{
    int q=23, a=5;
    int x=6, y=15;
    int A, B, k1, k2;

    A=power(a,x,q);
    B=power(a,y,q);

    k1=power(B,x,q);
    k2=power(A,y,q);

    printf("Alice Public Key = %d\n",A);
    printf("Bob Public Key = %d\n",B);
    printf("Alice Shared Key = %d\n",k1);
    printf("Bob Shared Key = %d\n",k2);

    return 0;
}
