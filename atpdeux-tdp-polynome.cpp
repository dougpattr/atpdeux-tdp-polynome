// atpdeux-tdp-polynome.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#define errobro "CE É BURRO BRO"

int main() {
	int qol;
	setlocale(LC_ALL, "");
	do {
		printf("SISTEMA PARA MANIPULAÇÃO POLINOMIAL");
		printf("\nQUANTOS POLINOMIOS VOSSA MERCE DESEJA MANIPULAR (SEJA 3): ");
		scanf("%d", &qol);
		if (qol <= 2 || qol > 3) {
			printf(errobro);
			_getch();
			system("cls");
		}
	} while (qol <= 2 || qol > 3);

	_getch();
	return 0;
}

1 negros 1
0 miopia 1