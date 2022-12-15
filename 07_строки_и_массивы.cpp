#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

void char_basics() {
    char symb = 'T';
    cout << symb << endl;
    cout << symb + 0 << endl;
    cout << endl << endl;

    char symb2 = 27;
    cout << symb2 << endl;
    cout << endl << endl;

    for (int i = 0; i < 127; i++) {
        char s = i;
        cout << "Symbol " << i << " is " << s << endl;
    }

    char ch1('F');
    char ch2(49);
    char ch3(5);
    char ch4('5');
}
void char_static_cast() {
    unsigned char symb('T');
    int i(symb);

    static_cast<int> (symb);
    cout << symb << endl;
}
void transition() {

    unsigned char symb;
    cin >> symb;
    cout << static_cast<int> (symb);


    int a;
    cin >> a;
    if (127 >= 0 <= a) {
        cout << static_cast<char> (a) << endl;
    } else {
        cout << "error" << endl;
    }


}
void char_arrays() {
    // char arr[5]{'h', 'e', 'l', 'l', 'o'};
    char arr[] ("hello");
    cout << arr << endl;
    cout << strlen(arr) << endl;
    cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
        if (arr[i] == '\u0000') {
            cout << "null" << endl;
        } else {
            cout << arr[i] << endl;
        }
    }
}
void str() {
    char arr[10] ("hello");
    char str1[10];
    char str3[10];

    cout << arr << endl;

    strcpy(str1, arr);

    cout << str1 << endl;

    strncpy(str3, str1, 2);

    cout << str3 << endl;

    char s1[30] ("This is ");
    char s2[] ("Ilon Mask");
    cout << strcat(s1, s2);
}
void special_function() {
    char symbol('d');
    char digit('4');
    char space(' ');
    char character('#');

    cout << symbol << endl;
    isalnum(symbol) ? cout << "true\n" : cout << "false\n";

    cout << digit << endl;
    isdigit(digit) ? cout << "true\n" : cout << "false\n";

    cout << space << endl;
    isspace(space) ? cout << "true\n" : cout << "false\n";

    cout << character << endl;
    ispunct(character) ? cout << "true\n" : cout << "false\n";
}

int main() {
    char p[100];
    char symbol;
    int i;
    while (symbol != '\n') {
        symbol = getchar();
        p[i] = symbol;
        i++;
    }

    cout << p << endl;
    return 0;
}
