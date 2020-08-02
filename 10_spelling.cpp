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
    cout << "Spelling of number " << num << " is ..." << endl;
    
    temp = revno;
    do {
        mod = temp % 10;
        temp = temp / 10;
        switch(mod) {
            case 1: cout << "ONE"; break;
            case 2: cout << "TWO"; break;
            case 3: cout << "THREE"; break;
            case 4: cout << "FOUR"; break;
            case 5: cout << "FIVE"; break;
            case 6: cout << "SIX"; break;
            case 7: cout << "SEVEN"; break;
            case 8: cout << "EIGHT"; break;
            case 9: cout << "NINE"; break;
            case 0: cout << "ZERO"; break;
            default: cout << "Invalid"; 
        }
        cout << " ";
    }while (temp != 0);
    cout << endl;
    return 0;
}

// Enter number 1234
// Spelling of number 1234 is ...
// ONE TWO THREE FOUR 