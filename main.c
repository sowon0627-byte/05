#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    int answer = 66;
    int trial = 0;
    int num;
    
    do
    {
        printf("Guess a number :");
        scanf("%i", &num);
        
        if (num > answer)
           printf("high!\n");
        else if (num < answer)
           printf("low!\n");
           
        trial = trial + 1;
    }
    while(num != answer);
    
    
    printf("Congratulation! trials : %i\n", trial);
    
  system("PAUSE");	
  return 0;
}
