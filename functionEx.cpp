#include <iostream>
#include <string>

using namespace std;


int addTwo(int input) //here is the secondary function
{
    int result = input + 2;
    return result;
}

int multi(int a, int b)
{
    return a*b;
}

//a void function witch returns nothing

void helloWorld()
{
    cout << "hello world !" << endl;
}

int main()
{
    int a = 2, b = 2;

    b = addTwo(a);

    cout << b << endl; //4

    int c = multi(a, b);

    cout << c << endl; //8

    helloWorld(); //function just say hello world without returning anything


    return 0;
}