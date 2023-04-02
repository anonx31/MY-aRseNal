/*program to print your own name in C by scanf function*/
#include<stdio.h>
int main() {
	char name[20];
	//will print message
	printf("Enter your name:");
	//will scan name
	scanf("%s",&name);
	//will print name
	printf("Your name is %s",name);
	return 0;
}
