#include <iostream>
using namespace std;


int main() {

    int password;
    int attempts = 3;

    while (attempts > 0)
    {
        cout << "Enter A Password: ";
        cin >> password;

        if (password == 1234) {
            cout << "Done";
            break;
        } else {
            attempts--;
            cout << "try" << attempts << "\n";
        }
    }
    if (attempts == 0) {
        cout << "Finsh" << "\n";
    }
    

    return 0;
}