#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int randint(int start, int end) {
    int num = start + rand() % (end - start + 1);
    return num;
}

void write_file(string filename, int quant) {
    ofstream file;
    file.open(filename, ios::out);
    for (int i = 0; i < quant; i++) {
        file << randint(-200, 200) << endl;
    }
    file.close();
}

void read_file(string file_path) {
    ifstream file;
    file.open(file_path, ios::in);

    int content;
    while(file >> content) {
        cout << content << "\t";
    }
    cout << endl;
    file.close();
}

void maximum(string file_path) {
    ifstream file;
    file.open(file_path, ios::in);

    int content;
    int max = 0;
    while(file >> content) {
        if (content > max) {
            max = content;
        }
    }
    cout << max << endl;
    file.close();
}

int main() {
    ifstream file1, file2;
    ofstream file3;

    char ch;
    file1.open("..\\file1.txt", ios::in);
    file2.open("..\\file2.txt", ios::in);

    if(!file1 || !file2) {
        perror("Error in message in file");
        exit(EXIT_FAILURE);
    }

    file3.open("..\\res_file.txt", ios::out);

    if (!file3) {
        perror("Error in message in file");
        exit(EXIT_FAILURE);
    }

    while(!file1.eof()) {
        file1 >> ch;
        file3 << ch;
    }

    while(!file2.eof()) {
        file2 >> ch;
        file3 << ch;
    }

    file1.close();
    file2.close();
    file3.close();

    return 0;
}

