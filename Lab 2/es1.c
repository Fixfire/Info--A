#include <stdio.h>

int main(){
	char c;
	int n_aperte = 0;
	int n_chiuse = 0;
	printf("Inserire una sequenza di caratteri e premere invio: ");
	do {
		scanf("%c", &c); 
		if(c == '(')
			n_aperte++;
		if(c == ')')
			n_chiuse++;
	} while (c != '\n' && n_chiuse <= n_aperte);
	
	if(n_aperte == n_chiuse)
		printf("Parentesi bilanciate!\n");
	else
		printf("Errore!\n");
}
	
