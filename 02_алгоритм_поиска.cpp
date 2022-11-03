#include <iostream>
#include <cmath>

using namespace std;

int randint (int min, int max) {
    return rand() % (max - min) + min; // эту формулу нужно просто запомнить
}

// линейный поиск (важно)
void liner_search() {
    srand(time(NULL));
    int array[10], key;
    for (int i = 0; i < 10; i++) {
        array[i] = randint(-10, 10);
        cout << array[i] << endl;
    }
    cin >> key;
    int i_key = -1;
    for (int i = 0; i < 10; i++) {
        if (array[i] == key) {
            i_key = i;
            break;
        }
    }

    if (i_key == -1) {
        cout << "not found" << endl;
    } else {
        cout <<  key << " is " << i_key << endl;
    }
}

void liner_search_min_max() {
    srand(time(NULL));
    int array[10], min, max, i_min, i_max;
    for (int i = 0; i < 10; i++) {
        array[i] = randint(-10, 10);
        cout << array[i] << endl;
    }

    min = array[0];
    max = array[0];
    i_min = -1;
    i_max = -1;
    for (int i = 0; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
            i_max = i;
        }
        if (array[i] < min) {
            min = array[i];
            i_min = min;
        }
    }
    array[i_max] = max;
    array[i_min] = min;
    cout << endl;
    cout << max << endl;
    cout << min << endl;
    cout << endl;
    for (int key: array) {
        cout << key << ", ";
    }
}

// задача для закрепление
void liner_search_max_min() {
    srand(time(NULL));
    int array[10], min, max, i_min, i_max;
    for (int i = 0; i < 10; i++) {
        array[i] = randint(-10, 10);
        cout << array[i] << endl;
    }

    min = array[0];
    max = array[0];
    i_min = -1;
    i_max = -1;
    for (int i = 0; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
            i_max = max;
        }
        if (array[i] < min) {
            min = array[i];
            i_min = min;
        }
    }
    // array[i_max] = max;
    // array[i_min] = min;
    cout << endl;
    cout << max << endl;
    cout << min << endl;
    cout << endl;

    int n = 0;
    if (i_min > i_max) {
        for (int i = i_max; i > i_min; i++) {
            n += array[i];
        }
    } else {
        for (int i = i_min; i <= i_max; i++){
            n += array[i];
        }
    }
    cout << n << endl;
}

void task_06() {
    int array[10], i_max, max, s = 0;
    for (int i = 0; i < 10; i++) {
        array[i] = randint(-10, 10);
        cout << array[i] << endl;
    }

    i_max = 0;
    max = array[0];
    for (int i = 0; i < 10; i++) {
        if (abs(array[i]) > max) {
            i_max = i;

        }
    }
    cout << i_max << endl;
    int i_pos;
    for (int i = 0; i < 10; i++) {
        if (abs(array[i]) > max) {
            i_pos = i;
            break;
        }
    }
    int sum;
    for (int i = i_pos; i < 10; i++) {
        sum+=array[i];
    }
    cout << endl;
    cout << sum << endl;
}
