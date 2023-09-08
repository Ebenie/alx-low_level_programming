#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* the header part is the above one */

/* the main function body */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(n>0){
           printf("%d is positive\n",n);
             }
        else if(n<0){
             printf("%d is negative\n",n);
             }
	else if(n==0){
	      printf("d% is zero\n",n);
          	}
        else{

               }


	/* your code displayed */
	return (0);
}
