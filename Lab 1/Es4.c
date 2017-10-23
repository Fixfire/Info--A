//Es4
#include <stdio.h>

#define IVA 0.22

int main(int argc, const char * argv[]) {
	float costo_ivato=0, costo_netto, iva;
	printf("Inserisci un costo ivato:\n");
	scanf("%f", &costo_ivato);
	// poiche:
	// costo_ivato = costo_netto + costo * IVA
	// costo_ivato = costo_netto * (1 +IVA ) = costo_netto 1.22
	float costo_netto = costo_ivato/(1 + IVA);
	float iva = costo_ivato - costo_netto;
	printf("costo netto: %f ; iva: %f\n", costo_netto, iva);
	
	return 0;
}