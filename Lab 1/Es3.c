//Es3
#include <stdio.h>

int main(int argc, const char * argv[]) {
	
	int n, reston;
	int primo = 0;
	printf("Inserisci un numero positivo:\n");
	scanf("%d", &n);
	
	for (int i=n-1; i>0; i--){	// inutile testare max..
		reston = n % i;
		if (reston == 0){
			primo++;
		}
	}
	
	if (primo<2){
			printf("numero primo\n");
		} else {
			printf("non è primo\n");
		}
	return 0;
}