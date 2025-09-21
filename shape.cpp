// shape
#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of row: ";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<i;j++)
        cout<<char(65+j)<<" ";
        cout<<endl;
    }
    return 0;
}