#include <iostream>
using namespace std;

int main() {
    
    int grade;
    cout << "Enter grades : ";
    cin >> grade;

    if(grade >= 90) {
        cout << "You got A grade";
    } else if(grade < 90 && grade >=75) {
        cout << "You got B garde";
    } else if(grade < 75 && grade >= 50) {
        cout << "You got C grade";
    } else {
        cout << "You failed in exam";
    }
    
    return 0;
}
