//not my code search from google


#include <stdio.h>
 
#define MYSIZEOF(X) (char *)(&(X) + 1) - (char *)(&(X))
 
int main(void)
{
  char x;
  
  printf("%d\n", MYSIZEOF(x));
 
  return 0;
}