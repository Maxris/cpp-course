#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age = -1; //qstart with a negative int to get into the loop, the condition need to be right first time 

    while(age < 0)
    {
        cout << "how old are you ?" << endl;
        cin >> age;
    }

    cout << "you are " << age << " years old" << endl;



    //same thing whith a "do while loop"

    /*
    int age = -1;
    do{
        cout << "how old are you ?" << endl;
        cin >> age;
    } while(age < 0); //do not forget the ";" at the end of this line
    */

    //for loop example
    
    /*
    for(int i = 0; i < 10; i++)
    {
        cout << i << endl; 
    }
    */

    return 0;
}

/*
if the user input a negative int, the program won't works
he have to input a correct answer*/

