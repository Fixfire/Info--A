//Es2
#include <stdio.h>

int main(int argc, const char * argv[]) {

	int n, m, max, restom, reston, i;
	int coprimo = 0;
	printf("Inserisci due numeri positivi:\n");
	scanf("%d", &n);
	scanf("%d", &m);
	
	printf("\nI divisori comuni sono: ");
	max = n;
	if (m>n)
		max= m;
	for (i=1; i<max; i++)
	{
		restom = m % i;
		reston = n % i;
		if (restom == 0 && reston == 0){
			printf("%d ", i);
			coprimo++;
		}
	}
	if(coprimo <= 1){
		 printf("I numeri sono coprimi");
	}
	
	// printf e' bufferizzata, un \n "aiuta":
	printf("\n");
	
	return 0;
}