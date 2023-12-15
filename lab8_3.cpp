/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
using namespace std;

int main() {
    int age, height;
    long long bounty;

    cout << "Enter your age: ";
    cin >> age;

  
    if (age <= 45) {
        cout << "Enter your height: ";
        cin >> height;
    }

    cout << "Enter your bounty: ";
    cin >> bounty;

    
    if (age < 25 && bounty >= 1000000000) {
        cout << "Your character = Zoro" << endl;
    } else if (age <= 25 && bounty >= 1000000000 && height >= 180) {
        cout << "Your character = Sanji" << endl;
    } else if (age >= 45 && bounty >= 1000000000) {
        cout << "Your character = Jinbe" << endl;
    } else {
        cout << "Your character = Brook" << endl;
    }

    return 0;
}