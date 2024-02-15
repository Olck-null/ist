/*Laba1.cpp Верхолетов Евгений 23ИСТ
Линейная алгебра
*/
#include <iostream>  // основная библиотека для работы с CMD
#include <fstream>  // библиотека для работы с файлами
#include <math.h>  // библиотека для математических вычислений


void main()
{
	using namespace std;
	setlocale (LC_ALL, "RUS");  //добавление руской локализации
	double x, out, x3, ex, up, mod, doun, l, cor;
	int out2;
	ofstream fout("LAB1.txt");  //привзка к выходному файлу (fout)

	cout << "Введите значение X :  ";
	cin >> x;
	x3 = pow(x, 3);
	ex = exp(x - 1);
	up = x3 * ex;
	mod = abs(x);
	doun = x3 * mod;
	cor = sqrt(x);
	l = cor - x;
	out = up / doun - l;
	out2 = round(out);
	cout << "Результат в десятичной системе:  " << out <<endl;
	cout << "Результат в восмеричной системе:  " << oct << out2 << endl;
	cout << "Результат в шеснадцетиричной системе:  " << hex << out2 << endl;
	fout << "Введите значение X : " << endl;
	fout << "Результат в десятичной системе:  " << out << endl;
	fout << "Результат в восмеричной системе:  " << oct << out2 << endl;
	fout << "Результат в шеснадцетиричной системе:  " << hex << out2 << endl;
}
