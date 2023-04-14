#include<iostream>
//allow the usage of setpreicision function
#include<bits/stdc++.h>
using namespace std;
int main() {
	float f1,f2;
	cout<<"Enter any two float number:";
	cin>>f1>>f2;
	float product=f1*f2;
	//setprecision function will limit the output upto 3 decimal only
	cout<<"Multiplication of two float number is "<<setprecision(3)<<product;
	return 0;
}
