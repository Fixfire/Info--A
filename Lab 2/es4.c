#include <stdio.h>

int main(){
	int numero;
	int num_prec;
	int sequenza, max_sequenza;
	printf("Inserire una sequenza di numeri terminata da 0 e premere invio: ");
	scanf("%d", &numero);
	num_prec = numero;
	sequenza = 1;
	max_sequenza = 1;
	do{
		scanf("%d", &numero);
		if(numero > num_prec){
			sequenza++;
		} 
		if(sequenza > max_sequenza){
			max_sequenza = sequenza;
			sequenza = 1;			
		}
		
		num_prec = numero;
	} while(numero != 0);
	
	printf("Massima sequenza = %d\n", max_sequenza);
  return 0;
}
