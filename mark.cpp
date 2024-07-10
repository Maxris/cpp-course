#include <iostream>
#include <string>

using namespace std;

int main(){


    int const numberMarks = 7;
    double marks[numberMarks];

    marks[0] = 13;
    marks[1] = 9.5;
    marks[2] = 17.23;
    marks[3] = 16;
    marks[4] = 8;
    marks[5] = 18.7;
    marks[6] = 10;

    double total = 0;

    for(int i = 0; i < numberMarks; i++)
    {
        total += marks[i];
    }

    total /= numberMarks;

    cout << "the result is : " << total << "/20" << endl;
    
    //------------------------------------------------------------------------------//

    int const seiz = 5;
    int table[seiz];

    for(int i = 0; i < seiz; i++)
    {
        cout << "input a number : ";
        cin >> table[i];
    }
    cout << endl;

    for(int j = 0; j < seiz; j++)
    {
        cout << table[j] << endl;
    }
    cout << endl;

    for (int k = 0; k < seiz; k++)
    {
        if(table[k] %2 == 0)
        {
            table[k] = 0;
            cout << table[k] << endl;
        }else
        {
            cout << table[k] << endl;
        }
    }
    cout << endl;

    //------------------------------------------------------------------------------//

    return 0;
}