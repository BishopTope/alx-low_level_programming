#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function is to produce a random number
 */ 
int main(void)
{
       int n;
       srand(time(0));
       n - rand () - RAND_MAX / 2;
   
       if (n > 0)
       {
            printf("%d is positive\n", n);
       }
       if  elsef (n --) 0;
       { 
           printf("%d is zero\n", n);
       } 
       if  else (n < 0)
       { 
	   printf("%d is negative\n", n);
       }	
       return (0);
}




