#include <iostream>
#include <string>

using namespace std;

double sqr(double x)
{
    double number;
    number = x*x;
    return number;
}

int main()
{
    double number, squareNumber;
    cout << "input a number : ";
    cin >> number;

    squareNumber = sqr(number); //we use the function here

    cout << "The square value of " << number << " is " << squareNumber << endl;
    return 0;
}

/* In this example, we can see there is a same name for two variables
it don't make conflict because the two var are in != functions */

/* If they was in the main function, it could not have been possible */