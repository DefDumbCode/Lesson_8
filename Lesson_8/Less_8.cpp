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

    cout << "��� ����� ������� ����� ����������� ��������?" << endl;
    cout << "����������� - 1\n"
        "������������� - 2\n"
        "���������� - 3\n"
        "��������� - 4\n";
    cin >> f;

    switch (f) {

    case(1):

        int a, b;
        float cs, ang, c;
        cout << "������� ������� a:  ";
        cin >> a;
        cout << "������� ������� b:  ";
        cin >> b;
        cout << "������� ���� ����� ��������� a � b: ";
        cin >> ang;
        ang = ang * M_PI / 180;
        cs = ang > (M_PI / 2) ? cos(M_PI - ang) * -1 : cos(ang);
        c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a * b * cs);
        cout << "������� c = " << c << endl;

        if (a == b == c) {
            cout << "����������� ��������������" << endl;
        }
        else if (a == b or a == c or c == b)
        {
            cout << "����������� ��������������" << endl;
        }
        else
            cout << "����������� ��������������" << endl;

        break;


    case(2):


        cout << "������� ������� a: ";
        cin >> a;
        cout << "������� ������� b: ";
        cin >> b;
        cout << "������� S = " << a * b << endl;

        break;


    case(3):

        int r;
        cout << "������� ������ r ����������:   ";
        cin >> r;
        cout << "������� ����� �����: " << pow(r, 2) * M_PI << endl;
        cout << "����� ���������� �����: " << 2 * r * M_PI << endl;

        break;


    case(4):

        float u, d;
        cout << "������� ������� ��������� a:   ";
        cin >> u;
        cout << "������� ������ ��������� b:    ";
        cin >> d;
        cout << "������� ����� �������� ����� " << (u + d) / 2 << endl;

        break;

    }
}