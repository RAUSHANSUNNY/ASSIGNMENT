// Write a program to input an ASCII code from the user and 
// print its corresponding character.

#include<iostream>
using namespace std;

int main(){
    int value;
    cout<<"enter your ASCII code: ";
    cin>>value;
    cout<<" symbol for your ASCII value "<<value <<" is = "<<char(value); // just type cast of integer into  char value

    return 0;
}