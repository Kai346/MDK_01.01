#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>

using std::cout;
using std::cin;
using std::sort;
using std::abs;

void task1()
{
    cout << "C++ is a general-purpose programming language with a bias towards systems programming that\n";
    cout << "  - is a better C\n";
    cout << "  - supports data abstraction\n";
    cout << "  - supports object-oriented programming\n";
    cout << "  - supports generic programming.\n";
}

void task2()
{
    cout << "Введите два числа: ";
    long long a, b;
    cin >> a >> b;
    cout << "Сумма = " << a + b << "\n";
}

void task3()
{
    cout << "Введите сантиметры: ";
    double cm;
    cin >> cm;
    cout << "Дюймы = " << cm / 2.54 << "\n";
}

void task4()
{
    cout << "Введите n: ";
    unsigned long long n;
    cin >> n;
    cout << "Сумма = " << n * (n + 1) / 2 << "\n";
}

void task5()
{
    cout << "Введите x1 y1 x2 y2: ";
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
        cout << "Ответ: YES\n";
    else
        cout << "Ответ: NO\n";
}

void task6()
{
    cout << "Введите три стороны: ";
    int a, b, c;
    cin >> a >> b >> c;

    int sides[3] = { a, b, c };
    sort(sides, sides + 3);
    a = sides[0];
    b = sides[1];
    c = sides[2];

    cout << "Ответ: ";
    if (a + b <= c)
        cout << "UNDEFINED\n";
    else if (a * a + b * b == c * c)
        cout << "YES\n";
    else
        cout << "NO\n";
}

void task7()
{
    cout << "Введите год: ";
    int year;
    cin >> year;

    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    cout << "Ответ: " << (isLeap ? "YES" : "NO") << "\n";
}

void task8()
{
    cout << "Введите месяц и год: ";
    int month, year;
    cin >> month >> year;

    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    int days;
    if (month == 2)
        days = isLeap ? 29 : 28;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    cout << "Ответ: " << days << " дней\n";
}

void task9()
{
    cout << "Введите число: ";
    int n;
    cin >> n;

    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "Сумма цифр = " << sum << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int choice;

    while (true)
    {
        cout << "  SELECT AN EXERCISE (1–9) or 0 to exit\n";
        cout << "  1 - Printing text about C++\n";
        cout << "  2 - The sum of two numbers\n";
        cout << "  3 - Centimeters to inches\n";
        cout << "  4 - Arithmetic progression\n";
        cout << "  5 - The queen's move (chess)\n";
        cout << "  6 - Right triangle\n";
        cout << "  7 - Leap year\n";
        cout << "  8 - The number of days in a month\n";
        cout << "  9 - The sum of the digits of a number\n";
        cout << "  0 - Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "\nGoodbye!\n";
            break;
        }

        switch (choice)
        {
        case 1: task1(); break;
        case 2: task2(); break;
        case 3: task3(); break;
        case 4: task4(); break;
        case 5: task5(); break;
        case 6: task6(); break;
        case 7: task7(); break;
        case 8: task8(); break;
        case 9: task9(); break;
        default:
            cout << "\nmistake! Enter a number from 0 to 9.\n";
            break;
        }
    }

    return 0;
}
