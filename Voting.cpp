#include <iostream>
using namespace std;

int main() {
    
    int age;
    cout << "Enter the number : ";
    cin >> age;

    if(age >= 18) {
        cout << "Congrats you are eligible for voting";
    } else {
        cout << "Sorry! you are not eligible for voting";
    }
    
    return 0;
}
