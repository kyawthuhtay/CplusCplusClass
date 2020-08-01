#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout << "Enter 4 numbers (a,b,c,d) : ";
    cin >> a >> b >>  c >> d;
    if (a > b) {
        if (a > c) {
            if ( a > d) {
                cout << "Largest number is A." << a;
            } else {
                cout << "Largest number is D." << d;
            }
        } else if (c > d) {
            cout << "Largest number is C." << c;
        } else {
            cout << "Largest number is D." << d;
        }
    }

    else if (b > c) {
        if (b > d) {
            cout << "Largest number is B." << b;
        } else {
            cout << "Largest number is D." << d;
        }
    } 

    else if (c > d) {
        cout << "Largest number is C." << c;
    } else {
        cout << "Largest number is D." << d;
    }

    cout << endl;
    return 0;
}

// 1 if a > b
// _ if a > c
// __ if a > d 

// 2 if b > c
// _ if b > d

// 3 if c > d 