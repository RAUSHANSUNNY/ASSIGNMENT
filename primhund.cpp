// Write a program to print all Prime numbers under 100.

#include<iostream>
using namespace std;
int main(){
    int num;
     bool result;
    cout<<"enter a number till you want prime number : ";
    cin>>num;
    cout<<"all prime number under "<<num<<" is: "<<endl;;
    for(int i=1;i<=num;i++){
        for(int j=2;j<i;j++){
            if (i%j!=0)
            cout<< i<<" ";
        
    }
    }

    
return 0;
}