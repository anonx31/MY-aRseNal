#include<stdio.h>
//function to check whether the integer is check prime or not
void checkprime(int N) {
	int flag=1;
	
	for(int i=2;i<=N/2;i++) {
		if(N%2==0){
			//if the condition is false the flag will set 0
			flag=0;
			break;
		}
	}
	if(flag) {
		printf("The number %d is a Prime Number",N);
	}
	else {
		printf("The number %d is not a Prime Number",N);
	}
}
int main() {
	int N=150;
	checkprime(N);
	return 0;
}
