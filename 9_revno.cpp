#include <iostream>
using namespace std;

int main(){
    int num, mod, temp, revno = 0;
    cout << "Enter number ";
    cin >> num;
    temp = num;
    do {
        revno = revno * 10 + (temp % 10);
        temp = temp / 10;
    } while (temp != 0);
    cout << "Reverse of number is " << revno << endl;
    return 0;
}

// Enter number 1234
// Reverse of number is 4321