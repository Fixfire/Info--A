//Es1
#include <stdio.h>
// USIAMO BOOL
#include <stdbool.h>

int main(int argc, const char * argv[]) {
	int n;
	bool bisestile = false;
	printf("Inserisci un anno:\n");
	scanf("%d", &n);
	// sono mutipli se resto == 0
	if((n%4) == 0)
		bisestile = true;
	if((n%100) == 0)
		bisestile = false;
	if((n%400) == 0)
		bisestile = true;
	
	if (bisestile){
		printf("L’anno %d è bisestile\n", n);
	} else {
		printf("L'anno %d non è bisestile\n", n);
	}
	return 0;
}