//Write a program to calculate sum of first N odd natural numbers
 
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i +=2){
        sum +=i;

    }
    cout<<"sum of "<<n<<" odd number is: "<<sum;
    return 0;
}