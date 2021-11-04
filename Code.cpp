#include <iostream>
#include <Windows.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float a, b, y;
    int x;

    printf("Введіть x = ");
    scanf_s("%u", &x);
    printf("Введіть y = ");
    scanf_s("%f", &y);
    

    a = ((pow(static_cast <float> (x), 2 / 3)) + (2 * pow(static_cast <float> (x) * y, 1 / 3)) + (4 * pow(y, 3 / 2))) / ((fabs(8 * static_cast <float> (x) - 5 * y)) + (pow(M_E, 3 * y)));
    b = (sin(static_cast <float> (x)) * sin(static_cast <float> (x)) + cos(0.52) - (2 * sin(M_PI_2 - 4) * sin(M_PI_2 - 4)) / (cos(3 * static_cast <float> (x)) * cos(3 * static_cast <float> (x)) + cos(5 * pow(static_cast <float> (x), 3)) * cos(5 * pow(static_cast <float> (x), 3))));

    printf("A=%f ", a);
    printf("B=%f ", b);
    printf("Hello Worlddd!");
    system("pause");
}


/*
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float a, n1, n2, n3, sum, dob;

    cout << "Введіть число: ";
    cin >> a;

    n1 = int(a) / 100;6
    n2 = (int(a) % 100)/10;
    n3 = int(a) - (n1 * 100) - (n2 * 10);
    sum = n1 + n2 + n3; 
    dob = n1 * n2 * n3;

    cout << "Сума дорівнює:  " << sum << endl;
    cout << "Добуток дорівнює:  " << dob << endl;

    system("pause");
}
*/