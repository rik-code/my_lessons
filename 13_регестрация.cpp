#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int menu();
bool isLoggedIn(string username, string password);
bool userRegister(string username, string password, string confirmation);
string loginLowercase(string username);


int main() {
    int option = 999;
    string login, password, confrimation;
    bool reg_status, log_status;

    while (option != 0) {
        option = menu();
        switch (option) {

            case 1:
                cout << "Your login: "; cin >> login;
                login = loginLowercase(login);
                cout << "Your password: "; cin >> password;
                cout << "Confirmation password: "; cin >> confrimation;
                reg_status = userRegister(login, password, confrimation);

                if(reg_status) {
                    cout << "Successfully registration!\n\n";
                } else {
                    cout << "Passwords aren't match! Try again!\n\n";
                }
                break;

            case 2:
                cout << "Your login: "; cin >> login;
                login = loginLowercase(login);
                cout << "Your password: "; cin >> password;
                string *logPtr = &login, *passPtr = &password;

                if (log_status) {
                    cout << "Login successful" << endl;
                } else {
                    cout << "Login or/and password is incorrect!" << endl;
                }

                break;
        }
    }
    return 0;
}

int menu() {
    cout << "Choose option...\n";
    cout << "0 - exit\n1 - Register\n2 - Login\n\n";
    int ans;
    cin >> ans;
    return ans;
}

bool isLoggedIn(string username, string password) {
    string uname, passw;
    ifstream read("..\\data\\" + username + ".txt");
    getline(read, uname);
    getline(read, uname);

    read.close();

    return uname == username && passw == password;
}

bool userRegister(string username, string password, string confirmation) {
    if (password == confirmation) {
        ofstream file;
        file.open ("..\\data\\" + username + ".txt", ios::out);
        file << username << endl << password;
        file.close();
        return true;
    } else {
        return false;
    }
}

string loginLowercase(string username) {
    string res;
    for (int i = 0; i < username.length(); i++) {
        res += tolower(username[i]);
    }
    return res;
}