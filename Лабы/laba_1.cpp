#include <iostream>

using namespace std;

void task_1() {
    string b;
    int s1 = 0;
    cin >> b;
    int a = b.length() - 1;
    int d = b.length() - 2;

    if (b[a] == ' ') {
        s1 = b[0];
        b[0] = b[d];
        b[d] = s1;
    } else {
        s1 = b[0];
        b[0] = b[a];
        b[a] = s1;
    }
    cout << b << endl;
}
void task_2() {
    string p;
    getline(cin, p);

    int k, n;
    cin >> n;
    cin >> k;

    // для удаления из строки используется метод erase(pos, count)

    p.erase(k, n);
    cout << p << endl;
}
void task_3() {
    string p, s1;
    getline(cin, p);

    for (int i = 0; i < p.length(); i++) {
        s1 += p[i];
        if (p[i] == 'a') {
            s1 += ' ';
        }
    }
    cout << s1 << endl;
}
void task_4() {
    string a, b;
    cin >> a;
    cin >> b;

    if (a == b) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
void task_5() {
    string p, s1;
    getline(cin, p);

    for (int i = 0; i < p.length(); i++) {
        if (p[i] != '+') {
            s1 += p[i];
        }
    }
    cout << s1 << endl;
}
void task_6() {
    string p, s1;
    int plus = 0, munys = 0;
    getline(cin, p);

    for (int i = 0; i < p.length(); i++) {
        if (p[i] == '+') {
            plus++;
        }
        if (p[i] == '-') {
            munys++;
        }
    }
    cout << "+: " << plus << endl;
    cout << "-: " << munys << endl;
}
void task_7() {
    string p;
    getline(cin, p);

    for (int i = 0; i < p.length(); i++) {
        if (p[i] == '!') {
            p[i] = '.';
        }
    }
    cout << p << endl;
}
void task_8() {
    string p;
    int f = 0, a = 0, t = 0, h = 0, e = 0, r = 0;
    getline(cin, p);

    for (int i = 0; i < p.length(); i++) {
        if (p[i] == 'f') {
            f += 1;
        }
        if (p[i] == 'a') {
            a += 1;
        }
        if (p[i] == 't') {
            t += 1;
        }
        if (p[i] == 'h') {
            h += 1;
        }
        if (p[i] == 'e') {
            e += 1;
        }
        if (p[i] == 'r') {
            r += 1;
        }
    }
    if (f >= 1 && a >= 1 && t >= 1 && h >= 1 && e >= 1 && r >= 1) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
void task_9() {
    /*

     не понял как решать

     */
}
void task_10() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '!') {
            int ben = i - s.length();
            s.erase(i, ben);
        }
    }
    cout << s << endl;
}
void task_11() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',') {
            s.erase(i, 1);
        }
    }
    cout << s << endl;
}
void task_12() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if (s1 > s2) {
        cout << s1 << endl;
    } else {
        cout << s2 << endl;
    }
}
void task_13() {
    string s;
    getline(cin, s);

    cout << s.length() << endl;
}
