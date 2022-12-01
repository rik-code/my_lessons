//
// Created by User on 01.12.2022.
//

#include <iostream>
using namespace std;

struct A { // определение структуры
    short id; // поле структуры
    int age;
    double salary=600.44;
};

struct S {
    string name;
    string passport_num;
    int age;
};

struct P {
    S em;
    double salary;
};

void struct_initialisation() {
    A a = {1, 35, 333.5}; // инициализация
    A b = {2, 34,};


    cout << a.salary << endl;
    cout << b.salary << endl;

    if (a.salary > b.salary) {
        cout << a.salary << endl;
    }
    else {
        cout << b.salary << endl;
    }

    a.salary += 200;
    cout << a.salary << endl;

    a.age++;
    cout << a.age << endl;
}
void struct_basics()  {
    A b; // объявил переменную
    b.id = 1;
    b.age = 35;
    b.salary = 2.45;

    A a;
    a.id = 2;
    a.age = 35;
    a.salary = 88.32;

    cout << a.salary << endl;
    cout << b.salary << endl;

    if (a.salary > b.salary) {
        cout << a.salary << endl;
    }
    else {
        cout << b.salary << endl;
    }

    a.salary += 200;
    cout << a.salary << endl;

    a.age++;
    cout << a.age << endl;
}
void struct_task1() {
    const int size = 4;
    A v[size];  // создаю массив на основе структуры

    for (int i = 0; i < size; i++) {
        cout << "Employee's id: ";
        cin >> v[i].id;

        cout << "Employee's age: ";
        cin >> v[i].age;

        cout << "Employee's salary: ";
        cin >> v[i].salary;
    }

    cout << v[0].id << endl; // вывести id первого элемента массива работников

    if (v[0].salary > v[1].salary) {
        if (v[0].salary > v[2].salary) {
            if (v[0].salary > v[3].salary) {
                cout << v[0].salary << endl;
            } else {
                cout << v[3].salary << endl;
            }
        } else {
            if (v[2].salary > v[3].salary) {
                cout << v[2].salary << endl;
            }
        }
    } else {
        if (v[1].salary > v[2].salary) {
            if (v[1].salary > v[2].salary) {
                cout << v[1].salary << endl;
            }
        } else {
            if (v[2].salary > v[3].salary) {
                cout << v[2].salary << endl;
            } else {
                cout << v[3].salary << endl;
            }
        }
    }

}

void string_basics() {
    string word; // строка это тескстовый тип данный

    cin >> word;
    cout << word[0] << endl;

    word[0] = '4';

    cout << word << endl;
}
void strings_cin() {
    string phrase, phrase2;
    int age;

    cout << "Введи свой возраст: ";
    cin >> age;
    cin.ignore(32767, '\n');  // игнорировать символ новой строки (нажатие на enter)

    // перед использованием функции getline (всегда) прописывайте cin.ignore
    cout << "Введите фразу: ";
    getline(cin, phrase);

    cout << "Введите еще одну фразу: ";
    getline(cin, phrase2);
    cout << phrase << endl;
    cout << phrase2 << endl;
}
void strings_perebor() {
    string p = "hello, how are you?";
    for (int i = 0; i < p.length(); i++) {
        cout << p[i] << endl;
        if (p[i] == ',') {
            p[i] = '!';
        } else if (p[i] == 'h') {
            p[i] = 'H';
        }
    }
    cout << p + " a" << endl;
}

int main() {

    P a = {{"Ben", "MP13241", 45}, 345.8};
    cout << a.salary << endl;
    cout << a.em.name << endl;

    return 0;
}