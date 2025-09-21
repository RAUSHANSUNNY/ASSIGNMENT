// Write a program to calculate sum of cube of first N 
// natural numbers

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int cube;
    cout<<" enter the number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cube=i*i*i;
        sum += cube;
    }
    cout<<" sum of cube of first "<<n<<" natural number is : "<<sum<<endl;
    return 0;

}