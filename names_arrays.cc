#include <iostream>
using namespace std;

/*
This program store strings in arrays, 
but it spills the first name given.
*/

int main() {

    string names[3]; //empty array created for inputs

    cout << "Enter the first name: ";
    getline(cin, names[0]);   // this input stores the first name in the array

    cout << "Enter the second name: ";
    getline(cin, names[1]);   // this input stores the second name in the array

    cout << "Enter the third name: ";
    getline(cin, names[2]);   // this input stores the third name in the array


    cout << "The first name is: " << names[0] << endl;

    return 0;
}
