// Write a program that reads two integers from the user 
// and determines if the first integer is divisible by the second 
// integer.


#include<iostream>
using namespace std;

int main(){
int a;
int b;
cout<<"enter the divided:";
cin>>a;
cout<<"enter the divisor:";
cin>>b;
if(a%b==0)
cout<<a<<" is divisible by "<<b;
else
cout<<a<<" is not divisible by "<<b;


    return 0;
}