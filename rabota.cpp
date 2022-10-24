#include <iostream>
using namespace std;
int main() {
	/*fint a, b;
	//дано целое число n. вывести n раз @
	cin >> a;
	or (int i = 1; i <= a; i += 1) {
		cout << "@" << endl;




	}*/
	//дано два числа х и y ( вводим х < y) . Найти сумму четных чисел от икс до игрик
	/*int x, y, i, sum = 0;
	cout << "vvedite x;";
	cin >> x;
	cout << "vvedite y:";
	cin >> y;
	i = x;
	
		while (i <= y) {
		if (i % 2 == 0) {
			sum = i+y;
			

		}	
		i++;  
		cout << sum << endl;
	}*/
	//дфны два числа x и y напечатать  числа из диапазано x и y в порядке убывания;
	/*int x, y, i;
	cout << "vvedite x;";
	cin >> x;
	cout << "vvedite y:";
	cin >> y;
	i = x;
	for ( i < y; i++;) {
		cout << i << endl;

	}*/
	//напечать прямоугольник из символов 20х8 из символов#
	
	/*
	cout << " #################### " << endl;
	cout << " #                  # " << endl;
	cout << " #                  # " << endl;
	cout << " #                  # " << endl;
	cout << " #                  # " << endl;
	cout << " #                  # " << endl;
	cout << " #                  # " << endl;
	cout << " #################### " << endl;*/
	// while дано целое положительное число н. нфйти произвдение чисел не больше н, которые делятся на3
	/*int a = 0, n, b;
	cin >> n;
	while (a <= n) {
		if (a % 3 == 0) {
			a++;
			a*b;
		}
		cout << b << endl;


	}*/
//	18. Задано натуральное число N. Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2,3,5.
	int n;
	cin >> n;
	int  a;
	
	int i = 0;
	for (i < n ) {
		if (i % 2 == 0|| i % 3 == 0|| i % 5 == 0) {
			a++;
		}
		cout << a << endl;




	}
}