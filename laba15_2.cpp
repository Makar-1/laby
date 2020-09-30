// laba15_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
#include <locale>

int main()
{
	setlocale(LC_ALL, "Rus");
	int x, a[3], k, i = 0;
	for (int j = 0; j < 3; j++) {
		do {
			system("cls");
			printf("Введите число %d: ", i+1);
			k = scanf_s("%d", &x);
		} while (k == 0);
		if (x > 0)
			a[i] = x * x;
		else
			a[i] = x;
		i++;
	}
	for (int j = 0; j < 3; j ++) {
		std::cout << a[j] << std::endl;
	}
}
