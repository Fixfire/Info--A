#include <stdio.h>

int main(){
	int N;
	int i, j, acc;

	printf("inserire un numero: ");
	scanf("%d", &N);

  // versione con due cicli innestati
  acc = 1;
	for(i = 0; i < N; i++) {
		for(j = 0; j <= i; j++)
			printf("%d ", acc++);
		printf("\n");
	}
	
  printf("\n");
	
	// versione con un solo ciclo
  acc = 1;
  j = 0;
  i = 1;
	while (i <= N) {
		printf("%d ", acc++);
    ++j;
    if (j == i) {
			printf("\n");
      j = 0;
      ++i;
    }
	}
	
  printf("\n");

	// versione al contrario
  acc = N * (N -1) / 2 + N;
  i = N;
  j = i;
  while (i > 0) {
    printf("%d ", acc - j + 1);
    --j;
    if (j == 0) {
      printf("\n");
      acc -= i;
      --i;
      j = i;
    }
  }
}

