#include <iostream>
#include <math.h>
using namespace std;

#define MIN(x, y) ((x > y) ? y : x)
#define MAX(x, y) ((x > y) ? x : y)
#define SQRT(x) (pow(x, 2))
#define POW(x, y) (pow(x, y))
#define EVEN(x) ((x % 2) ? false : true)
#define ODD(x) ((x % 2) ? true : false)

int main()
{
    setlocale(LC_ALL, "Russian");

    int x = 2, y = 5;
    cout << "Даны два числа: " << x << ", " << y << endl;
    cout << "Меньшее из них: " << MIN(x, y) << endl;
    cout << "Большее из них: " << MAX(x, y) << endl;
    cout << "Квадрат " << x << " равен " << SQRT(x) << endl;
    cout << "Квадрат " << y << " равен " << SQRT(y) << endl;
    cout << x << " в степени " << y << " равно " << POW(x, y) << endl;
    cout << y << " в степени " << x << " равно " << POW(y, x) << endl;
    cout << "Число " << x;
    if (EVEN(x)) cout << " четное" << endl;
    else cout << " нечетное" << endl;
    cout << "Число " << y;
    if (ODD(y)) cout << " нечетное" << endl;
    else cout << " четное" << endl;

    return 0;
}
