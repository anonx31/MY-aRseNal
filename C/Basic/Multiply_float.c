#include<stdio.h>

 int main() {
 	float f1,f2;
 	printf("Enter any two float number:");
 	scanf("%f%f",&f1,&f2);
 	float product=f1*f2;
 	//%.2f will limit the output upto 2 decimal point only
 	printf("Multiplication of float number is %.2f",product);
 	return 0;
 }
