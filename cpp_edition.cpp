#include <iostream>
using namespace std;
int main () {
    string system = "sosirsOS C++ Edition", version = "1.0.2", versionAt = "12.10.2026", author = "polzovatel_8787";

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
                cout << "Help for " << system << " Console\n";
                cout << "fetch - system info\nexit - exit\ngui - gui\nprint - print text";
            } else if (command == "fetch") {
                cout << "System: " << system;
                cout << "\nVersion: " << version << " (" << versionAt << ")";
                cout << "\nName of user: " << name;
            } else if (command == "exit") {
                active = false;
            } else if (command == "gui") {
                cout << "Sorry, gui is not a release";
            } else if (command == "print") {
                string out;
                cout << (cin >> out, out);
            } else {
                cout << "Command '" << command << "' not found";
            }
        }
    }
}
