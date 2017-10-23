//Es5
#include <stdio.h>

int main(int argc, const char * argv[]) {
	
	int i, k, n;
	long pot;
	printf("Inserisci due numeri positivi:\n");
	scanf("%d", &n);
	scanf("%d", &n);
	
	printf("\nLe potenze di %d sono: \n", n);
	pot = n;
	for (i=0; i<k; i++)
	{
			printf("%ld ", pot);
			pot*=n;
	}
	
	printf("\n");
	
	return 0;
}