// Write a program to calculate average of three integers. 
#include<iostream>
using namespace std;
int main(){
    float num1;
    float num2;
    float num3;
    float avg;
    cout<<"entern three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    avg=(num1+num2+num3)/3;
    cout<<"Average of "<<num1<<","<<num2<<" and "<<num3<<" is = "<<avg;
    return 0;

}