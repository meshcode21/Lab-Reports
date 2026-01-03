#include<stdio.h>
#include<conio.h>

int GCD(int a, int b){
	if(a==0 || b==0)
		return 0;
	else{
		int r;
		
		while(b!=0){
			r=a%b;
			a=b;
			b=r;
		}
		return a; // b as a gcd.
	}
}

int main(){
	int a,b,c;
	
	while(1){
		printf("Enter two numbers: "); scanf("%d%d",&a,&b);
		if(a<0 || b<0){
			printf("\n!!! numbers are must be positive. Try again !!!\n\n");
		}
		else break;
	}
	printf("\nThe GCD of %d and %d is: %d",a,b,GCD(a,b));
	
	return 0;
}
