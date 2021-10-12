#include <stdio.h>

int main(void) {
  int Test,H,W,N,floor,number;
  scanf("%d",&Test);
  for (int i=1;i<= Test;i++)
  {
    scanf("%d %d %d",&H,&W,&N);

    floor = N%H;
    number = N/H+1;

    printf("%d%.2d\n",floor,number);
  } 
  return 0;
}