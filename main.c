#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    int x,y;
    int result;
    char op;
    
    result = 0;
    
    printf("enter the calculation : ");
    scanf("%i%c%i", &x, &op, &y);
    
    switch(op)
    {
              case '+' : 
                   result = x + y;
                   break;
                   
              case '-' :
                   result = x - y;
                   break;
                   
              case '*' :
                   result = x * y;
                   break;
                   
              case '/' :
                   result = x / y;
                   break;
                   
              default:
                      printf("Invalid operator!\n");
                      break;
    }
    
    printf("= %i", result);
    
  system("PAUSE");	
  return 0;
}
