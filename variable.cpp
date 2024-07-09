#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    //init a variable
    int userAge(30);

    double pi(3.14);

    bool iLoveProgramming(true);

    char aSimpleLettrer('m');

    //display a variable

    cout << "ur age is : " << userAge << endl;
    cout << "the letter is : " << aSimpleLettrer << endl;
    cout << " is love programming is : " << iLoveProgramming << endl << endl;

    //give 2 or more names to a variable

    int myAge(29);
    int& alsoMyAge(myAge);

    cout << "I'm " << myAge << "old (variable)" << endl << endl;
    cout << "I'm " << alsoMyAge << "old (ref to the variable)" << endl;

    //cin

    string userName;
    cout << "what's your name ?" << endl;
    //cin >> userName; will catch the first world only
    getline(cin, userName);//using get line to catch all char from the user
    cout << "your name is " << userName << endl;

    //init a const variable

    int const myAgeToday(29);
    string const myName("Max");

    //use cmath example

    int result = 16;
    int newResult = sqrt(result);
    cout << "sqrt of 16 : " << newResult << endl;
    
    return 0;
}