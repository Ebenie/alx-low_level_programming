#include <stdlib.h>
#include <time.h>
/* the header part is the above one */

/* the main function body */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if(n>0){
           printf("is positive\n");
             }
        else if(n<0){
             printf("is negative\n");
             }
	else if(n==0){
	      printf("is zero\n");
          	}
        else{

               }


	/* your code displayed */
	return (0);
}
