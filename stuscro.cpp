// Develop a program that takes a student's score (0-100) as 
// input and prints the corresponding grade (e.g., A, B, C, D, F) 
// based on a grading scale. 


#include<iostream>
using namespace std;
int main(){
float marks;
cout<<"enter your marks :";
cin>>marks;
if (marks>=90 && marks<=100)
cout<<"GRADE A ";
else if (marks>=80 && marks<90)
cout<<"GRADE B ";
else if (marks>=70 && marks<80)
cout<<"GRADE C ";
else if (marks>=60 && marks<70)
cout<<"GRADE D ";
else if (marks>=40 && marks<60)
cout<<"GRADE E ";
else if (marks<40)
cout<<"GRADE F ";
else
cout<<"invalid marks! ";
return 0;
}