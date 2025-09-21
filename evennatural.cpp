//Write a program to calculate sum of first N even natural numbers
 
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=2;i<=2*n;i +=2){
        sum +=i;

    }
    cout<<"sum of "<<n<<" even number is: "<<sum;
    return 0;
}