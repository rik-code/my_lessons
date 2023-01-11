#include <iostream>
#include <cstring>

using namespace std;

void matrix_char() {
    int matrix[3][4] {
            {0},
            {0},
            {0}
    };
    char matrix_string[3][10] {
            "mama",
            "papa",
            "baba"
    };
    cout << matrix << endl;
    cout << matrix_string << endl;
}

void char_double_array() {
    char m_string[4][100];

    for (int i = 0; i < 4; i++) {
        cin.getline(m_string[i], 100);

    }
    for (int j = 0; j < 4; j++) {
        cout << m_string[j] << endl;

    }
}

void dynamic_array() {
    int n, m = 100;
    cin >> n;
    cin.get();
    char **m_string = new char *[n]; // динамический массив

    for (int i = 0; i < n; i++) {
        m_string[i] = new char [m];
        cin.getline(m_string[i], m);
        cout << m_string << endl;
    }

    // удаляем массив
    for (int i = 0; i < n; i++) {
        m_string = nullptr;
    }
    m_string = nullptr;
}

int main() {
    int n, m = 100, sum = 0, mid = 0, j = 0;
    cin >> n;
    cin.get();
    char **m_string = new char *[n]; // динамический массив

    for (int i = 0; i < n; i++) {
        m_string[i] = new char [m];
        cin.getline(m_string[i], m);
        sum += strlen(m_string[i]);
        mid = sum / n;
    }


    for (int i = 0; i < n; i++) {
        if (strlen(m_string[i]) > mid) {
            int len = strlen(m_string[i]);
            while (len >= mid) {
                m_string[i][len] = '\u0000';
                len--;
            }
        } else if (strlen(m_string[i]) < mid) {
            int len = strlen(m_string[i]);
            while (len <= mid) {
                m_string[i][len] = ' ';
                len++;
            }
        }
        cout << m_string[i] << endl;
    }

    // удаляем массив
    for (int i = 0; i < n; i++) {
        m_string = nullptr;
    }
    m_string = nullptr;
    return 0;
}