#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

const double PI = 3.141592653589793;

int main()
{
	//Инициируем переменные 
	double a, b, h, y, n;
	double s = 0;
	double r = -1;
	int i = 1;
	cout << "Enter a, b, h, n\n";
	/*a = 0.1;aa
	b = 1;
	h = 0.1;
	n = 5;*/
	cin >> a >> b >> h >> n;
	cout << "a: " << a << " b: " << b << " h: " << h << " n: " << n << "\n";
	//Цикл фор для нахождения у и s с х, изменяющегося от a до b с шагом h
	for (double x = a; x < b; x += h)
	{
		y = x * atan(x) - log(sqrt(1 + pow(x, 2)));
		//Цикл фор для расчёта суммы s
		for (double k = 1; k < n; k++)
		{
			r = -r * pow(x, 2);
			s += r / (2 * k * (2 * k - 1));
		}
		//Выыод Y, S и |Y-S|
		cout << left << setw(6) << i;
		cout << left << setw(7) << "Y=";
		cout << left << setw(10) << y;
		cout << left << setw(7) << "S=";
		cout << left << setw(10) << s;
		cout << left << setw(10) << "|Y-S|=";
		cout << left << setw(10) << fabs(y - s) << endl;

		s = 0;
		r = -1;
		i++;
	}

	return 0;
}