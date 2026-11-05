#include <stdio.h>
#include <string.h>

int main()
{
    char p[] = "sendmoremoney";
    char p2[] = "cashnotneeded";
    char c[20];
    int k[] = {9,0,1,7,23,15,21,14,11,11,2,8,9};
    int k2[20], i;

    printf("Ciphertext: ");
    for(i=0; i<13; i++)
    {
        c[i] = (p[i]-'a'+k[i])%26+'a';
        printf("%c", c[i]);
    }

    printf("\nNew key for part (b): ");
    for(i=0; i<13; i++)
    {
        k2[i] = (c[i]-p2[i]+26)%26;
        printf("%d ", k2[i]);
    }

    return 0;
}
