// Create a program that takes a person's age as input and 
// classifies them into different age groups (e.g., child, 
// teenager, adult, senior).


#include<iostream>
using namespace std;

int main(){

    int age ;
    cout<<" enter your age in year : ";
    cin>>age;
    if(age==0)
    cout<<"you are infant!";
    else if(age>0 && age<13)
    cout<<"you are child!";
    else if(age>=13 && age<18)
    cout<<"you are teenager!";
    else if(age>=18 && age<40)
    cout<<"you are Adult!";
    else
    cout<<"you are Senior!";




}