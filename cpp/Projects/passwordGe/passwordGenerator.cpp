#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

// function definition
string getPassword(int length) {
    string Password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]|:;<>,.?/~";
    int charSize = characters.size();
    srand(time(0));
    int randomIndex;
    for(int i = 0; i < length; i++) {
        randomIndex = rand() % charSize;
        Password += characters[randomIndex];
    }
    return Password;
}

int main() {
    int length;
    cout << "Enter the length of the password: ";
    cin >> length;
    string password = getPassword(length); // function call
    cout << "Your password is: " << password << endl;
    return 0;
}
