#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N_TRIAL   1000000

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int a[5] = {10, 20, 30, 40, 50};

	printf("a = %u\n", a);
	printf("a + 1 = %u\n", a + 1);
	printf("*a = %d\n", *a);
	printf("*(a+1) = %d\n", *(a+1));
	
	return 0;	

}
