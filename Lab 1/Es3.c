//Es3
#include <stdio.h>

int main(int argc, const char * argv[]) {
	
	int n, reston;
	printf("Inserisci un numero positivo:\n");
	scanf("%d", &n);
	
	for (int i=n-1; i>0; i--)	// inutile testare max..
	{
	reston = n % i;
	if (reston == 0){
		break;
	}
	}
	
	// se qui siamo usciti o a fine ciclo (n=1) o per il break:
	if (i==1){
			printf("numero primo\n");
		} else {
			printf("non è primo\n");
		}
	return 0;
}