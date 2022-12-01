#include <iostream>
using namespace std;

int randint(int start, int end) {
    int num = start + rand() % (end - start + 1);
    return num; }

void address_operation() {
    int b = 10;
    int arr[3] = {1, 2, 3};
    cout << b << endl;
    // адрес переменной
    cout << &b << endl;

    // массивы
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
}

void dename_operation() {
    int b = 10;
    cout << b << endl;
    cout << &b << endl;
    // оператор * разыменовывает адрес ячейки переменной
    cout << *&b << endl;
}

void pointers() {
    int b = 10;
    int *c = &b;

    cout << b << endl;
    cout << &b << endl;

    cout << *&b << endl;

    cout << c << endl;
    cout << *c << endl;
}

void pravila_pointers() {
    // правила написание указателей
    int *iPtr;
    double *dPtr;

    // можно, но не нужно
    int* iPtr1;
    int * iPtr2;

    int *a1, *a2, *a3;
    double *a9, a91; // a9 - указатель, а91 - не указатель
}

void dm() {
    int n;
    cin >> n;

    // инициализация динамического массива
    int *s = new int[n];
    for (int i=0; i < n; i++) {
        cout << i + 1 << endl;
        cin >> s[i];
    }
}

void task_dm() {
    int k;
    cin >> k;

    int *s = new int[k];
    srand(time(NULL));
    for (int i = 0; i < k; i++) {
        s[i] = randint(1, 10);
        cout << s[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum+=s[i];
    }
    cout << sum / k << endl;

    // удаление динамического массива
    // delete[] s;
    // s = nullptr;
}

void da_p() {
    srand(time(NULL));
    int size = randint(3, 15);
    int *a = new int[size];

    for (int i = 0; i < size; i++) {
        a[i] = randint(1, 100);
        cout << a[i] << " ";
    }
}

int main() {

    return 0;
}