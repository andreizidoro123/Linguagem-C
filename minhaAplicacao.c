#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

// Função para resolver a equação do segundo grau
void resolverEquacao(double a, double b, double c) {
    double delta, x1, x2, parteReal, parteImaginaria;

    // Calcula o delta
    delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        // Duas raízes reais distintas
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes reais são: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    }
    else if (delta == 0) {
        // Raízes reais iguais
        x1 = -b / (2 * a);
        printf("A raiz dupla é: x = %.2lf\n", x1);
    }
    else {
        // Raízes complexas
        parteReal = -b / (2 * a);
        parteImaginaria = sqrt(-delta) / (2 * a);
        printf("As raízes complexas são: x1 = %.2lf + %.2lfi e x2 = %.2lf - %.2lfi\n", parteReal, parteImaginaria, parteReal, parteImaginaria);
    }
}

int main() {
	setlocale(LC_ALL, "Potuguese");
    double a, b, c;

    // Entrada dos coeficientes da equação
    printf("Digite o coeficiente A: ");
    scanf("%lf", &a);
        printf("Digite o coeficiente B: ");
    scanf("%lf", &b);
        printf("Digite o coeficiente C: ");
    scanf("%lf", &c);

    // Verifica se é uma equação de segundo grau
    if (a == 0) {
        printf("O valor de 'a' deve ser diferente de zero para uma equação de segundo grau.\n");
    } else {
        // Chama a função para resolver a equação
        resolverEquacao(a, b, c);
    }

    return 0;
}
