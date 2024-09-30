#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;


int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int f;

    cout << "Над какой фигурой будет совершаться действие?" << endl;
    cout << "Треугольник - 1\n"
        "Прямоугольник - 2\n"
        "Окружность - 3\n"
        "Трампеция - 4\n";
    cin >> f;

    switch (f) {

    case(1):

        int a, b;
        float cs, ang, c;
        cout << "Введите сторону a:  ";
        cin >> a;
        cout << "Введите сторону b:  ";
        cin >> b;
        cout << "Введите угол между сторонами a и b: ";
        cin >> ang;
        ang = ang * M_PI / 180;
        cs = ang > (M_PI / 2) ? cos(M_PI - ang) * -1 : cos(ang);
        c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cs);
        cout << "Сторона c = " << c << endl;

        if (a == b == c) {
            cout << "Треугольник равносторонний" << endl;
        }
        else if (a == b or a == c or c == b)
        {
            cout << "Треугольник равнобедренный" << endl;
        }
        else
            cout << "Треугольник разносторонний" << endl;

        break;


    case(2):


        cout << "Введите сторону a: ";
        cin >> a;
        cout << "Введите сторону b: ";
        cin >> b;
        cout << "Площадь S = " << a * b << endl;

        break;


    case(3):

        int r;
        cout << "Введите радиус r окружности:   ";
        cin >> r;
        cout << "Площадь круга равна: " << pow(r, 2) * M_PI << endl;
        cout << "Длина окружности равна: " << 2 * r * M_PI << endl;

        break;


    case(4):

        float u, d;
        cout << "Введите верхнее основание a:   ";
        cin >> u;
        cout << "Введите нижнее основание b:    ";
        cin >> d;
        cout << "Средняя линия трапеции равна " << (u + d) / 2 << endl;

        break;

    }
}