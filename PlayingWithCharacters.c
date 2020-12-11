#include <stdio.h>
#include <string.h> 
#include <math.h> 
#include <stdlib.h>

int main() 
{
    char ch, s[20],t,sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("%c",&t);
    scanf("%[^\n]", sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}
