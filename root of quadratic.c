#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    float discriminant,root1,root2;
    printf("Enter the coefficents of the quadratic equation(ax^2+bx+c): ");
    scanf("%d %d %d",&a,&b,&c);
    discriminant=b*b-(4*a*c);
    if (discriminant<0){
        printf("Roots are complex!!\n");
    }
    else if (discriminant==0){
        printf("Only one root exists!!\n");
        root1=(-b/(2*a));
        printf("%.2lf \n",root1);
    }
    else{
        printf("The two real roots are: \n");
        root1=(-b+sqrt(discriminant/(2*a)));
        root2=(-b-sqrt(discriminant/(2*a)));
        printf("%.2lf \n",root1);
        printf("%.2lf \n",root2);
    }
    
    return 0;
}