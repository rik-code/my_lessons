#include <iostream>
using namespace std;

int randint(int start, int end) {
    int num = start + rand() % (end - start + 1);
    return num;
}

void fill_matrix(int **array, int lines) {
    for (int i = 0; i < lines; i++) {
        array[i] = new int [lines];
        for (int j = 0; j < lines; j++) {
            array[i][j] = randint(-10, 100);
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
void task1_2(int **array, int lines) {
    long pro = 1;
    bool neg = false;
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines; j++) {
            if (array[i][j] < 0 ) {
                neg = true;
                break;
            }
        }
        if (!neg) {
            for (int j = 0; j < lines; j++) {
                pro *= array[i][j];
            }
            cout << pro << endl;
            pro = 1;
        }
    }
}

void task2(int **array, int lines) {
    long sum = 0;
    bool neg = false;
    bool match = false;
    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines; j++) {
            if (array[i][j] < 0) {
                neg = true;
                break;
            }
        }
        if (!neg && !match) {
            for (int j = 0; j < lines; j++) {
                sum += array[i][j];
            }
            match = true;
            break;
        }
    }

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines; j++) {
            array[i][j] -= sum;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    srand(time(NULL));
    int n;
    cin >> n;

    int **matrix = new int *[n];
    fill_matrix(matrix, n);
    task1_2(matrix, n);
    task2(matrix, n);
    return 0;
}