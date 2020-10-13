#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
  	char *str[]={"one","two","three","four","five","six","seven","eight","nine"};
    for (i=a;i<=b;i++)
    {
         if((i>9)&&(i%2!=0))
             printf("odd\n");
        else if((i>9)&&(i%2==0))
             printf("even\n");
   
        else
             printf("%s\n",str[i-1]);
    }
   return 0;
}

