#include <iostream>
#include <string>

using namespace std;

int main ()
{
    //switch case (only for equality test) :
    int numberOfPlayers(2);

    switch (numberOfPlayers) //name of the variable to work with
    {
        case 0:
            cout << "azertyuiop" << endl; //action to realise
            break;                        //break

        case 1:
            cout << "azertyuiop" << endl;
            break;

        case 2:
            cout << "azertyuiop" << endl;
            break;

        default:                          //default case (ultimate case if no one on top is executed)
            cout << "azertyuiop" << endl;
            break;
    }


    //for loop :
    int test = 5;

    for(int i = 0; i < test; i++)
    {
        cout << test << endl;

    }


    //while loop :
    int j = 10;
    int k = 0;
    while (k < j)
    {
        cout << "hello" << endl;
        k++;
    }

/* ==, &&,!= like in C langage or and, or, not */

    return 0;
}