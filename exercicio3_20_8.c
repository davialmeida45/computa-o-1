#include <stdio.h>
int main()
{
	int i;
	float f;
	char c;

	printf("Digite um caractere: ");
	scanf("%c", &c);
	printf("Digite um valor inteiro: ");
	scanf("%i", &i);
	printf("Entre com um numero de ponto flutuante (valor nao inteiro): ");
	scanf("%f",&f);
	printf("voce digitou:\n");
	       printf("caracter:%c\n",c);
	       printf("numero inteiro:%d\n", i);
	       printf("numero de ponto flutuante: %,2f\n");

	       return 0;
}
