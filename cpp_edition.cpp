#include <iostream>
using namespace std;
int main () {
    string system = "sosirsOS C++ Edition", version = "1.0.1", versionAt = "11.10.2026", author = "polzovatel_8787";

    string password = "", name = "";
    string inputtedPass;
    cout << system << " " << version << " (" << versionAt << ") by " << author << endl;
    if (password == "") {
        cout << "Your name?\n";
        cin >> name;
        cout << "password?\n";
        cin >> password;
    }
    cout << "LOGIN\nEnter password\n";
    cin >> inputtedPass;
    if (password == inputtedPass) {
        cout << "Starting sosirsOS C++ Edition...\n";
        bool active = true;
        cout << "enter 'help' for help";
        while (active) {
            cout << "\n>>> ";
            string command;
            cin >> command;
            if (command == "help") {
                cout << "Help for ";
                cout << system;
                cout << " Console\n";
                cout << "fetch - system info\nexit - exit";
            } else if (command == "fetch") {
                cout << "System: ";
                cout << system;
                cout << "\nVersion: ";
                cout << version << " (" << versionAt << ")";
                cout << "\nName of user: ";
                cout << name;
            } else if (command == "exit") {
                active = false;
            } else {
                cout << "Command '";
                cout << command;
                cout << "' not found";
            }
        }
    }
}
