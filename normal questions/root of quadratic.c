#include<stdio.h>
#include<math.h>

/* Sample Output:
Enter coefficients a, b and c: 1 -5 6
Roots are real and different.
Root 1 = 3.00
Root 2 = 2.00

Enter coefficients a, b and c: 1 2 1
Roots are real and equal.
Root 1 = Root 2 = -1.00

Enter coefficients a, b and c: 1 1 1
Roots are complex and different.
Root 1 = -0.50 + 0.87i
Root 2 = -0.50 - 0.87i

Note: Program solves quadratic equation ax² + bx + c = 0
Uses discriminant (b² - 4ac) to determine nature of roots:
- If > 0: Real and different roots
- If = 0: Real and equal roots
- If < 0: Complex roots
*/

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