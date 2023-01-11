#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(string word) {
    bool res = true;
    int len = word.length();
    for (int i = 0; i <  len; i++) {
        if (word[i] != word[len - 1 - i]) {
            res = false;
            break;
        }
    }
    return res;
}

void print_bool(bool answer) { // функция с типом возврата void только печатает
    if (answer) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
}

int ym(int a1, int a2) {
    int p1 = a1*a2;
    return p1;
}

int del(int a3, int a4) {
    int v = 0;
    if (a4 == 0) {
        return v;
    } else {
        int p2 = a3 / a4;
        return p2;
    }

}

int main() {
    string array[6] = {"level", "hello", "anna", "noon", "mama", "defined",};
    for (string str : array) {
        cout << str << "is palindrome: ";
        print_bool(is_palindrome(str));
    }

    cout << endl;
    cout << ym(2, 5) << endl;

    cout << endl;
    cout << del(4, 2) << endl;
    cout << del(4, 0) << endl;
    return 0;
}
