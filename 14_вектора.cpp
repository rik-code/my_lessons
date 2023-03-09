#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

void print_vector_s(vector<string> &v) {
    auto begin = v.begin();
    auto end = v.end();
    for (auto ptr = begin; ptr != end; ptr++) {
        cout << *ptr << " ";
    }
}

void print_vector(vector<int> &v) {
    auto begin = v.begin();
    auto end = v.end();
    for (auto ptr = begin; ptr != end; ptr++) {
        cout << *ptr << " ";
    }
}

void vector_begin() {
    vector<int> array; // объявление целочисленного вектора
    vector<int> array2 = {0, 1, 2, 3, 4, 5, 6};  // список инциализаторов векторов
    vector<int> array3 {10, 8, 6, 4, 2, 1}; // c++ 11

    cout << array2[6] << endl;
    cout << array3.at(2) << endl;
}

void vector_resizing() {
    vector<int> array3 {10, 8, 6, 4, 2, 1}; // c++ 11

    cout << array3.size() << endl;
    array3.resize(10); // расширили вектор до 10
    cout << array3.size() << endl;

    // перебор вектора (можно использовать foreach или for)
    for (auto &element: array3)
        cout << element << " ";

    cout << endl;

    array3.resize(3); // можно обрезать
    cout << array3.size() << endl;
}

void iterators() {
    vector<int> array3 {10, 8, 6, 4, 2, 1}; // c++ 11

    auto begin {&array3[0]}; // фиксирую начало вектора
    auto end {begin + size(array3)};

    for (auto ptr {begin}; ptr != end; ptr++) {
        cout << *ptr << ' ';
    }
}

void fill_vector() {
    vector<string> fridge;

    string buffer = "";

    do {
        getline(cin, buffer);
        if (buffer.size() > 0) {
            fridge.push_back(buffer); // метод вектора, который позволяет в конеу добавить элемент
        }
    } while (buffer != "");

    auto begin = fridge.begin();
    auto end = fridge.end();

    for (auto ptr = begin; ptr != end; ptr++) {
        cout << *ptr << ", ";
    }
}

void insert_elements_to_vector() {
    vector<int> numbers1 {1, 2, 3, 4, 5};
    auto iter1 = numbers1.begin();
    numbers1.insert(iter1 + 2, 8);
    print_vector(numbers1);

    cout << endl;

    // добавим несколько элементов после 1;
    auto iter2 = numbers1.begin();
    numbers1.insert(iter2 + 1, 5, 4);
    print_vector(numbers1);

    cout << endl;

    // меняем элементы
    vector<int> values {10, 20, 30, 40, 50};
    vector<int> numbers2 {1, 2, 3, 4, 5};
    auto iter3 = numbers2.begin();
    numbers2.insert(iter3, values.begin(), values.begin() + 4);
    print_vector(numbers2);
}

void delete_elements_to_vector() {
    // удаление элементов вектора

    /*
     1. удалить всё .clear()
     2. удалить последний элемент вектора .pop_back()
     3. erase(p) - удаляет элемент, на который указывает p
     4. erase(begin, end) - удаляет элементы из диопазона begin-end
     */

    vector<int> numbers1 = {1, 2, 3, 4, 5, 6};
    auto iter = numbers1.begin();
    numbers1.erase(iter + 2);
    print_vector(numbers1);

    cout << endl;

    vector<int> numbers2 {1, 2, 3, 4, 5, 6};
    auto begin = numbers2.begin();
    auto end = numbers2.end();
    numbers2.erase(begin + 2, end - 1);
    print_vector(numbers2);
}

void reassign_elements_of_vector() {
    vector<string> languages { "c++", "python", "java", "c#"};
    languages[3] = "html";
    print_vector_s(languages);

    cout << endl;

    languages.assign(5, "c++");
    print_vector_s(languages);

    cout << endl;

    languages.assign({"c++", "python", "python"});
    print_vector_s(languages);
}

void swaping_elements_of_vector() {
    vector<string> clangs {"C++", "C#", "C"};
    vector<string> ilangs {"Python", "Ruby", "PHP"};

    clangs.swap(ilangs);
    print_vector_s(clangs);
}

int main() {

    return 0;
}
