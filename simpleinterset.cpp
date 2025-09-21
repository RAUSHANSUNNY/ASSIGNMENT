//Write a program to calculate simple interest.

#include<iostream>
using namespace std;

int main(){
    float amount; //float data type works with integer as well as floating values also
     float rate;
      float time;
       
       cout<<"enter the principle amount:"<<endl;
       cin>>amount;
       cout<<"enter the rate of interest:"<<endl;
       cin>>rate;
       cout<<"enter the time in year:"<<endl;
       cin>>time;
        float SI = (amount*rate*time)/100; // formula to calculate the simple interest
        cout<<"simple interest according to given data: \n SI = "<<SI;
        return 0;


}