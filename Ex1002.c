#include <stdio.h>

double area, raio, raio2;
double pi = 3.14159;

int main() {
  scanf("%lf", &raio);
	raio2 = raio*raio;
	area = pi*raio2;
	printf("A=%.4lf\n", area);
	return 0;
}
