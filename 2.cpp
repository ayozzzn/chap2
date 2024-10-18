#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    if (number%4==0 && number%100!=0 || number%400==0) {
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0; 
}

// B.