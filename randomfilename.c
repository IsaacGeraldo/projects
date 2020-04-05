#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void gerar() {
	system("cls");
	int i;
	printf("Gerando filename aleatorio...\n");
	srand(time(NULL));
	printf("1%d", rand() % 5)
	for (i = 0; i < 11; i++) {
		printf("%d", rand() % 9);
	}
	printf("\n\nPressione qualquer tecla para gerar um filename novo.");
	getch();
	gerar();
}

int main() {
	gerar();
}