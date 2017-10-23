//Es7

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
	
	int i,n=0;
	bool ok = false;
	while (!ok){
			printf("Inserisci un numero positivo fra 2 e 12:\n");
			scanf("%d", &n);
			ok = (n>=2 && n<=12);
			if (ok) {
				break;
			}else{
				printf("NON e' fra 2 e 12!\n");
			}
	}
		printf("\n Tabellina: %d\n", n);
		for (i=1; i<=10; i++)
		{
			printf("%dx%d=%d\n", n, i, n*i);
		}
	
	return 0;
}