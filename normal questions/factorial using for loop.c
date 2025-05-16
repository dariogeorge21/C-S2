#include<stdio.h>
#include<math.h>

int main(){
    int num;
    printf("Enter number: ");
    scanf ("%d",&num);
    int fac=1;
    for(int i=2;i<=num;i++) {
    	fac*=i;
    	}
    printf("Factorial of the number: %d\n",fac); 
    return 0;
}	
