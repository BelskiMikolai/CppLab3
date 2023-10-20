
#include <iostream>
#include <math.h>

using namespace std;

const double PI = 3.141592653589793;

int main()
{
    //Создаём переменные 
    double a, b, h;
    int i = 1;
    //Запрашиваем их
    cout << "Enter a, b, h\n"; 
    cin >> a >> b >> h; //0.7 1.8 0.1
    cout <<"a: "<< a<<" b: " << b<<" h: " << h << "\n";
    //Создаём переменные y и y_max, y_min для нахождения минимального/максимального
    double y = -log(fabs(2 * sin(a / 2)));
    double y_max = y;
    double y_min = y;
    //Цикл фор для нахождения значений у при изменении х от a до b.
    for (double x = a; x < b; x+=h)
    {
        y = -log(fabs(2 * sin(x / 2)));

        cout << i << ". " << "y= " << y << " " << "x= " << x << endl;
        i++;
        //Проверка на y_max, y_min
        if (y > y_max)
        {
            y_max = y;
        }
        if (y < y_min)
        {
            y_min = y;
        }
    }
    //Вывод
    cout << "y_max: " << y_max << "\ny_min: " << y_min<<endl;
	return 0;
}