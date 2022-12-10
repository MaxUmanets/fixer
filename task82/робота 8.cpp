// робота 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include "windows.h"
#include <math.h>
using namespace std;
double func1(double x)
{
    if (pow(cos(x*x),3)>=0 )
    {
        return pow(pow(cos(x * x), 3) + abs(10 * x - 6), 1 / 3) + sin(M_PI / 2);
    }
    else
    {
        return 1000;
    }
}
double func2(double x, double y)
{
    if (x != -8 && y != 1 && pow(x+y,2)!=0)
    {
        return pow(x/x+abs(8*pow(y,3)), 1 / 2)-pow(x*x+(x*10*y/pow(x+y,2)), 1 / 5)+pow(M_E,5);
    }
    else
    {
        return 1000;
    }
}
double func3(double a, double b)
{
    return 13 * a - (10 * b * b);
}
int main()
{
    double X, Y, result1, result2;
    cout << "Input x\n";
    cin >> X;
    cout << "Input y\n";
    cin >> Y;
    if ((func1(X) - 1000 == 0) || (func2(X, Y) - 1000 == 0))
    {
        cout << "Wrong input" << endl;
    }
    else
    {
        cout << "F1 = " << func1(X) << endl << "F2 = " << func2(X, Y) << endl;
        result1 = func1(X);
        result2 = func2(X, Y);
        cout << "F3 = " << func3(int(result1), result2);
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
