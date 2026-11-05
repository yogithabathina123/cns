#include <stdio.h>
#include <string.h>

int main()
{
    char c[500], freq[]="etaoinshrdlcumwfgypbvkjxqz";
    int count[26]={0}, map[26], i,j,n;

    printf("Enter ciphertext: ");
    fgets(c,sizeof(c),stdin);

    printf("Enter number of possible plaintexts: ");
    scanf("%d",&n);

    for(i=0;c[i];i++)
        if(c[i]>='a' && c[i]<='z')
            count[c[i]-'a']++;

    for(i=0;i<26;i++) map[i]=i;

    for(i=0;i<26;i++)
        for(j=i+1;j<26;j++)
            if(count[map[i]]<count[map[j]])
            {
                int t=map[i];
                map[i]=map[j];
                map[j]=t;
            }

    printf("\nPossible plaintext:\n");

    for(i=0;i<n && i<26;i++)
    {
        char temp[500];
        strcpy(temp,c);

        for(j=0;temp[j];j++)
            if(temp[j]>='a' && temp[j]<='z')
                temp[j]=freq[i]=='\0'?'?':
                freq[0]; 

        printf("%s\n",temp);
    }

    return 0;
}
