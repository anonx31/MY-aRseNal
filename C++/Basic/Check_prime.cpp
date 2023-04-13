#include<iostream.h>
using namespace std;
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
		cout<<"the number "<<N<<"is Prime Number";
	}
	else {
		cout<<"the number "<<N<<"is not a Prime Number";
	}
}
int main() {
	int N=150;
	checkprime(N);
	return 0;
}
