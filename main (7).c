#include <stdio.h>

int main(void) {
  char a[1000001]={0};
  int i = 0, c = 1, word = 0;
  
  scanf("%s", a);
  
 for (i = 0; a[i] != '\0'; i++)
  {
    if (a[i] == ' ') 
    c++;
  } 

  printf("%d",c);
  return 0;
}