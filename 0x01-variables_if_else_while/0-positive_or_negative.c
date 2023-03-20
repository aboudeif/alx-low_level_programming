#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
char*status[] = {"positive","zero","negative"};
if(n > 0)
	printf("%d is %s\n",n, status[0]);
if(n == 0)
	printf("%d is %s\n",n, status[1]);
if(n < 0)
	printf("%d is %s\n",n, status[2]);
return (0);
}
