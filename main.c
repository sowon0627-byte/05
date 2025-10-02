#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    int x,i,sum;
    sum = 0;
    
    printf("input an integer : ");
    scanf("%d", &x);
    
    for(i=1;i<x+1;i++)
       sum = sum + i;
    
    printf("The result is %i.", sum);
    
  system("PAUSE");	
  return 0;
}
