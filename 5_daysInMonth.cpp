#include <iostream>
using namespace std;

int main(){
    int month,year;
    cout << "Enter Month";
    cin >> month;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        switch (month) {
            case 4: cout << "April lasts for 30"; break;
            case 6: cout << "June lasts for 30"; break;
            case 9: cout << "September lasts for 30"; break;
            case 11: cout << "November lasts for 30"; break;
        }
    } else if (month == 2) {
        cout << "Enter Year";
        cin >> year;
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            cout << "February lasts for 29";
        } else {
            cout << "February lasts for 28";
        }
    } else switch(month) {
        case 1: cout << "January lasts for 31"; break;
        case 3: cout << "March lasts for 31"; break;
        case 5: cout << "May lasts for 31"; break;
        case 7: cout << "July lasts for 31"; break;
        case 8: cout << "August lasts for 31"; break;
        case 10: cout << "October lasts for 31"; break;
        case 12: cout << "December lasts for 31"; break;
        default: cout << "Invalid Month"; break;
    }
    return 0;
}

// 4, 6, 9, 11 (30)
// 2 (28, 29)
// 1, 3, 5, 7, 8, 10, 12 (31)

// December lasts for 31
// January lasts for 30
// Feb Year