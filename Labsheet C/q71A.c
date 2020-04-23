//KUMAR ANURAG
//19130

#include<stdio.h>
#include<string.h>
int main()
{
    int slen,n;
    char s[100];
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%s",s);
        slen = strlen(s);
        if(slen>10)
        {
            printf("%c%d%c", s[0],slen-2,s[slen-1]);
        }
        else
        {
            printf("%s",s);
        }
        n--;
    }
    return 0;
}