// Write a program to check whether a given number is a 
// Prime number or not 
#include<iostream>
using namespace std;
int main(){
    int num;
    bool result;
    cout<<"enter a number: ";
    cin>>num;
    if (num<=1)
     result = false;// smalest prime number is 2
    else{
    for(int i=2;i<num;i++)
    if (num % i==0)
     result = false;
    else 
     result = true;
}
if (result)
cout<<num<<" is a prime number!";
else
cout<<num<<" is not a prime number!";
return 0;
}