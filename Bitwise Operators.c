#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
 int a,b,c=0,d=0,e=0;
  
  for (a=1;a<n;a++)
  {
      for (b=n;b>a;b--)
      {
          if ((a&b)<k && (a&b)>c) {c = a&b;}
          if ((a|b)<k && (a|b)>d) {d = a|b;}
          if ((a^b)<k && (a^b)>e) {e = a^b;}
      }
  }
printf ("%d\n%d\n%d", c,d,e);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
