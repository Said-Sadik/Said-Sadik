#include <iostream>
#include <string>
#include <ctime>
#include <sys/types.h>
#include <unistd.h>

using namespace std;

int main() {
    string command;

    while (true) {
        cout << "Введите команду: ";
        getline(cin, command);

        if (command == "hello") {
            cout << "Привет! Это твой мини-терминал." << endl;
        } 
        else if (command == "time") {
            time_t now = time(0);
            char* dt = ctime(&now);
            cout << "Текущее время: " << dt;
        } 
        else if (command == "pid") {
            cout << "PID текущего процесса: " << getpid() << endl;
        } 
        else if (command == "exit") {
            break;
        } 
        else {
            cout << "Неизвестная команда: " << command << endl;
        }
    }

    return 0;
}