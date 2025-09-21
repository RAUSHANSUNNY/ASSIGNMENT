// Write a program to input a character from the user and print 
// its ASCII code.

#include<iostream>
using namespace std;

int main(){
    char symbol;
    cout<<"enter your symbol: ";
    cin>>symbol;
    cout<<" ASCII value for "<<symbol<<" is = "<<int(symbol); // just type cast of symbol into integer value

    return 0;
}