// Create a program that takes the lengths of three sides of a 
// triangle as input and determines whether the triangle is 
// equilateral, isosceles, or scalene. 


#include<iostream>
using namespace std;

int main(){
    float side1;
    float side2;
    float side3;
    cout<<"enter the side of triangle: ";
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2==side3 && side1==side3)
    cout<<"The triangle is equilateral!";
    else if(side1==side2 || side2==side3||side1==side3)
    cout<<"The triangle is isosceles!";
    else
    cout<<"The triangle is scalene!";


    return 0;

}