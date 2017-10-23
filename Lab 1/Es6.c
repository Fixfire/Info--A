//ES6 - tuffi
#include <stdio.h>
#define NUM_GIUDICI 5
int main(int argc, const char * argv[]) {
	
	int i=0;
	float n, max, min, voto, somma=0;
	for (i=0; i<NUM_GIUDICI; i++)
	{
			printf("Inserisci il %d voto:\n", i+1);
			scanf("%f", &n);

			if (i==0){
				max = n;
				min = n;
			}
			//sommo incondizionato, no so ancora min/max:
			somma+=n;
		
			if (n>max)
				max=n;
			if (n<min)
				min=n;
	}
	//"scalo" min e max:
	somma= somma - min - max;
	voto = somma *2;
	printf("%f\n", voto);
	
	return 0;
}