//   Write a program to input three characters from the user and 
// display characters with their corresponding ASCII codes. 

#include<iostream>
using namespace std;

int main(){
    char symbol1;
    char symbol2;
    char symbol3;
    cout<<"enter your symbol: "<<endl;
    cin>>symbol1>>symbol2>>symbol3;
    cout<<" ASCII value for "<<symbol1<<" is = "<<int(symbol1)<<endl; // just type cast of symbol into integer value
    cout<<" ASCII value for "<<symbol2<<" is = "<<int(symbol2)<<endl;
    cout<<" ASCII value for "<<symbol3<<" is = "<<int(symbol3)<<endl;

    return 0;
}