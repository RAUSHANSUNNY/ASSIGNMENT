// Write a program to calculate sum of squares of first N 
// natural numbers

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int squar;
    cout<<" enter the number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        squar=i*i;
        sum += squar;
    }
    cout<<" sum of square of first "<<n<<" natural number is : "<<sum<<endl;
    return 0;

}