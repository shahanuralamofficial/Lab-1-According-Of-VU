//write a c++ program to print only odd numbers from 49 to 99 using three loops in three different user defined functions.

#include<iostream>
using namespace std;

void for_loop()

{
    int odd_number;
    for(odd_number=49; odd_number<=99; odd_number+=2)
        cout<<odd_number<<" ";

}

void while_loop()
{
    int odd_number=49;
    while(odd_number<=99)
    {
        cout<<odd_number<<" ";
        odd_number+=2;
    }
}

void do_while_loop()
{
    int odd_number=49;
    do
    {

        cout<<odd_number<<" ";
        odd_number+=2;
    }
    while(odd_number<=99);

}

int main()

{
    cout<<"For Loop: ";
    for_loop();
    cout<<endl;
    cout<<endl;

    cout<<"While Loop: ";
    while_loop();
    cout<<endl;
    cout<<endl;

    cout<<"Do While Loop: ";
    do_while_loop();
    cout<<endl;
    cout<<endl;
    return   0;
}
