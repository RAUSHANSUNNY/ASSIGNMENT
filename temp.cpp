// Develop a program that converts a temperature from 
// Fahrenheit to Celsius or vice versa based on user input. The 
// user should specify the type of conversion.

#include<iostream>
using namespace std;
int main(){
    float temp;
    char unit;
    cout<<"enter the temprature with unit (F or C): ";
    cin>>temp>>unit;
    if (unit=='F'){
        temp=(temp-32)*5/9;
        unit='C';
        cout<<"after conversion from F to C tempreture is: "<<temp<<unit<<endl;;
    }
    else if (unit=='C'){
        temp=(temp*9/5)+32;
        unit='F';
        cout<<"after conversion from C to F tempreture is: "<<temp<<unit<<endl;;
    }
    else 
    cout<<"invalide unit";
    

   
}