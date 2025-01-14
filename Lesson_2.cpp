﻿#include <iostream>
using namespace std;
int main()
{
    //Конструкция if - else
	int a = 2, b = 10;
	if (a == b) { // Если a будет равным b, тогда выполниться код
		// Здесь код который выполниться
		// Если всего одна строка кода, то фигурные скобки {} можно не ставить
	}
	else if (a <= b) { // Если а будет меньшим или равным b
	 // Если предыдущее условие не выполниться,
	 // а здесь условие окажется верным, то выполниться этот код
	}
	else {
		// Этот код сработает, если другие условия не выполнятся
	}

	//И Или
	if (a != b && a > b) {
		// Код выполниться, если и первое, и второе условие
		// окажутся верными
	}

	if (a < b || a == b) {
		// Код выполниться, если или первое, или второе условие
		// окажется верным
	}

	//сокращенная форма if else
	int x = 90, a = 8;
	int res = x < a ? (x + a) : (x - a);//если “x” будет меньше “а”, 
	//то в переменную res устанавливаем их сумму, иначе – их разницу.
	cout << res;

	//Конструкция switch
	int x = 23;
	switch (x) { // Проверяем переменную x
	case 1: // Если переменная будет равна 1, то здесь сработает код
		// Может быть множество строк, а не только одна
		cout << "Переменная равна 1" << endl;
		break; // Указываем конец для кода для этой проверки
	case 56: // Если переменная будет равна 56, то здесь сработает код
		// Может быть множество строк, а не только одна
		cout << "Переменная равна 56" << endl;
		break; // Указываем конец для кода для этой проверки
		// По аналогии таких проверок может быть множество
		// Также можно добавить проверку, которая сработает в случае
		// если все остальные проверки не сработают
	default:
		cout << "Что-то другое" << endl;
		break; // Можно и не ставить, так как это последние условие

}
