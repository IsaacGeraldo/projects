#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float area, pi = 3.14, raio;
	scanf("%f", &raio);
	area = pi*pow(raio, 2);
	printf("%.2f", area);
	return 0;
}
