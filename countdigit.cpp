// Write a program to count digits in a given number


#include<iostream>
using namespace std;

int main(){
    int num;
   int count=0;
    cout<<"enter a number: ";
    cin>> num;
    while (num!=0){
        num/=10;
        count+=1;
    }
    cout<<"total number of digit in given number is: "<<count;
    return 0;


}