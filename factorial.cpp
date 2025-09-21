//  Write a program to calculate factorial of a number 

#include<iostream>
using namespace std;
int main(){
    int num;
    int fact=1;
    cout<<"enter a number : ";
    cin>>num;
    if (num==0){
        fact = 1;

    }
    else if (num>0){
        for (int i = num;i>=1;i--){
            fact *=i;

        }
    }
    else
    cout<<"invalide number to calculate factorial!";

    cout<<" factorial for the "<<num<<" is "<<fact;
    return 0;
}