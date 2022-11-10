//
// Created by User on 10.11.2022.
//

#include <iostream>

using namespace std;

void while_loop () {
    int c = 1;
    while (c < 11) {
        cout << c;
        c += 3;
    }

    cout << endl;
}

void sum_of_digits () {
    int n, s;
    cin >> n;
    s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }

    cout << s << " ";
}

void fact () {
    int n, fact = 1, i=1;
    cin >> n;
    while (i <= n) {
        fact*=i;
        cout << i;
        i++;
    }
    cout << endl;
    cout << fact;
}

void fib () {
    int sum, n, i = 0, i1 = 0, i2 = 1;

    cin >> n;

    while (i < n) {
        cout << i1 << endl;
        sum = i1 + i2;
        i1++;
        i1 = i2;
        i2 = sum;
    }
}

void olympiad_task1 () {
    int n, tbd, temp;
    cin >> n;
    tbd = 0;
    while (n > 0) {
        temp = n % 10;
        tbd = tbd * 10 + temp;
        n /= 10;
    }
    cout << tbd;
}

void olympiad_task2 () {
    const int size = 10;
    int value;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << i + 1;
        while (true) {
            cin >> value;
            bool in_array = false;
            for (int j = 0; j < i; j++) {
                if (value == arr[j]) {
                    in_array = true;
                    break;
                }
            }
            if (in_array) {
                cout << value << endl;
            }
            else {
                break;
            }
        }
        arr[i] = value;
    }

    for(int i = 0;  i < size; i++) {
        cout << arr[i] << endl;
    }
}
