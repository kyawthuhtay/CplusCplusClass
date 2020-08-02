#include <iostream>
using namespace std;

int main(){
    int n1, n2, evcnt = 0, oddcnt = 0;
    int i = 1;
    cout << "Enter how many number ";
    cin >> n1;
    while (i <= n1) {
        cout << "Enter another number ";
        cin >> n2;
        (n2 % 2 == 0) ? evcnt++ : oddcnt++;
        ++i;
    }
    cout << "Total EVEN Numbers " << evcnt << endl;
    cout << "Total ODD Numbers " << oddcnt << endl;
    return 0;
}

// Enter how many number 4

// Enter another number 1
// Enter another number 2
// Enter another number 3
// Enter another number 4

// Total EVEN Numbers 2
// Total ODD Numbers 2