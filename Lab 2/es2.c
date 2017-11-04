#include <stdio.h>

int main(){
	char c;
	printf("Immettere una frase: ");
	do {
		scanf("%c", &c);
		switch(c){
			case 'a':
				printf("afa");
				break;
			case 'e':
				printf("efe");
				break;
			case 'i':
				printf("ifi");
				break;
			case 'o':
				printf("ofo");
				break;
			case 'u':
				printf("ufu");
				break;
			default:
				printf("%c", c);
				break;
		}
	} while (c != '\n');
}
