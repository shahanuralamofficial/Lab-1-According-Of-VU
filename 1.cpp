//write a c++ program to find the letter grade of a student according VU grading system

#include<iostream>
using namespace std;
int main()

{
    int grade;
    cout<<"Enter Any Subject Number: ";
    cin>>grade;

    if(grade>=80 && grade<=100)
    {
        cout<<"A+"<<endl;
    }

    else if(grade>=75 && grade<80)
    {
        cout<<"A"<<endl;
    }

    else if(grade>=70 && grade<75)
    {
        cout<<"A-"<<endl;
    }

    else if(grade>=65 && grade<70)
    {
        cout<<"B+"<<endl;
    }

    else if(grade>=60 && grade<65)
    {
        cout<<"B"<<endl;
    }

    else if(grade>=55 && grade<60)
    {
        cout<<"B-"<<endl;
    }

    else if(grade>=50 && grade<55)
    {
        cout<<"C+"<<endl;
    }

    else if(grade>=45 &&grade<50)
    {
        cout<<"C"<<endl;
    }

    else if(grade>=40 && grade<45)
    {
        cout<<"D"<<endl;
    }

    else
    {
        cout<<"F"<<endl;
    }

    return 0;
}
