#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int t;
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  t=a+b+c;
  t=t+b+c;
  return t;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

or

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int arr[n];
   arr[0]=a;
   arr[1]=b;
   arr[2]=c;
  int sum=a+b;
  for(int i=3;i<n;i++){
      sum=sum+arr[i-1];
      arr[i]=sum;
  }
  return sum;
  }
  


int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

