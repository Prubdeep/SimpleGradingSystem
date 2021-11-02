// Simple grading program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string name;
    int grade;
    cout << "Please enter your full name:";
    getline(cin, name);
    cout << "Please enter the grades:";
    cin >> grade;
    if (grade >= 70) {
        cout << "A";
    }
    else if (grade >= 60 && grade <=69) {
        cout << "B";
    }
    else if (grade >= 50 && grade <= 59) {
        cout << "C";
    }
    else if (grade >= 40 && grade <= 49) {
        cout << "D";
    }
    else if (grade <= 40) {
        cout << "F";
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
