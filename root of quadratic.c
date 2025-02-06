#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    printf("Enter value of x^2: ");
    scanf ("%d",&a);
    printf("Enter value of x: ");
    scanf ("%d",&b);
    printf("Enter constant: ");
    scanf ("%d",&c);
    float d= ((b*b)-((4*a*c)/(2*a)));

    float root1=((-b)+pow(d,0.5));
    float root2=((-b)-pow(d,0.5));
    printf("Root1: %f\n",root1);
    printf("Root2: %f\n",root2);
    return 0;
}
