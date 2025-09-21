//Write a program to ask user about the cost price and selling 
// price banana per dozen. Calculate the profit or loss earned 
// upon selling 25 bananas.

#include<iostream>
using namespace std;

int main(){
     
    float CP;//CP means cost price per dozen
    float SP;//CP means selling price per dozen
    float cp;//cp means selling price per peice
    float sp;//sp means cost price per peice
     
    cout<<"enter the cost prise of banana per dozen:"<<endl;
    cin>>CP;
    cout<<"enter the selling prise of banana per dozen:"<<endl;
    cin>>SP;
     
     cp=CP/12;
     sp=SP/12;
     if(cp==sp)
     cout<<"No profit no loss ";
     else if(cp>sp)
     cout<<"earning after selling 25 bananas = "<<(cp-sp)*25<<" loss";
     else
     cout<<"earning after selling 25 bananas = "<<(sp-cp)*25<<" profit";

    return 0;

    
}