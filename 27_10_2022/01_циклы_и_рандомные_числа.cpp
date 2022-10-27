//
// Created by User on 27.10.2022.
//

#include <iostream>
#include <cmath>
using namespace std;

// подобие цикла
void goto_operation() {
    double x;
    tryAgain:
    cin >> x;

    if (x < 0.0) {
        goto tryAgain; // попросит вывести число ещё раз
    }

    cout << sqrt(x) << endl;
}

// библиотека cmath
void cmath_library() {
    // синусы, косинусы
    cout << cos(1) << endl; // находит косинус
    cout << sin(1) << endl; // находит синус

    // функция степень
    cout << pow(2,3) << endl; // возводит в степень
    cout << sqrt(49) << endl; // возводит в квадрат
    cout << cbrt(121) << endl; // возводит в куб
    cout << hypot(50, 60) << endl; // считает гипотенузу по 2 катитам

    // функции округление
    cout << ceil(2.67) << endl; // округление вверх
    cout << floor (2.67) << endl; // округление вниз
    cout << fmod (10, 3) << endl; // находит остаток от деление

    // модуль
    cout << abs(-5) << endl; // находит модуль числа
}

// циклы
void power() {
    int n, p;
    cin >> n >> p;
    int s = 1;
    for (int i = 0; i < p; i++) {
        s *= n;
    }
    cout << s;
}
void stars_pius() {
    int stars;
    cin >> stars;

    for (int i=1; i <= stars; i++) {
        for (int j=1; j <= i; j++) {
            cout <<  "*";
        }
        cout << endl;
    }

}
void stars_minus() {
    int stars;
    cin >> stars;

    for (int i = stars - 1; i <= 0; i--) {
        for (int j=1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// генерация чисел
void generation() {
    srand(100);
    for (int i = 0; i < 100; i ++) {
        cout << rand() << "\t";
        if ((i + 1) % 5 == 0) {
            cout << endl;
        }
    }
}
void generation_random_array() {
    srand(time(NULL));
    const int length = 100;
    int a_r[length];
    for (int i = 0; i < length; i++) {
        a_r[i] = rand() % 100 - 10;
        cout << a_r[i] << ", ";
    }
}
