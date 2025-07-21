#include <iostream>
using namespace std;


int main() {

    int password;
    int attempts = 3;

    for (int i = 0; i <= 3; i++)
    {
        cout << "Enter A Password: ";
        cin >> password;

        if (password == 1234)
        {
            cout << "Done" << "\n";
        } else {
            attempts--;
            cout << "Try" << attempts << "\n";
        }
        
        if (attempts == 0) {
            cout << "Finsh" << "\n";
        }
    }
    
}