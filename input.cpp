// Create a program that takes a number (1-7) as input and 
// prints the corresponding day of the week.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number :"<<endl;
    cin>>a;
        switch (a){
        case 1:
        cout<<"its MONDAY!";
        break;
        case 2:
        cout<<"its TUESDAY!";
        break;
        case 3:
        cout<<"its WEDNESDAY!";
        break;
        case 4:
        cout<<"its THURSDAY!";
        break;
        case 5:
        cout<<"its FRIDAY!";
        break;
        case 6:
        cout<<"its SATURDAY!";
        break;
        case 7:
        cout<<"its SUNDAY!";
        break;
        default:
        cout<<"invalid number!";
    }
    return 0;
}