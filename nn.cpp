//Write a program to calculate sum of first N natural numbers 

#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter the number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    cout<<"sum of "<<n<<" natural number is: "<<sum;
    return 0;
}