#include<stdio.h>

/* Sample Output:
Value of auto variable: 10
Value of auto variable in inner block: 20
Value of auto variable after inner block: 10

Value of static variable initially: 0
Value of static variable after increment: 1
Value of static variable in next call: 1

Value of register variable: 5
Value of register variable after increment: 6

Value of extern variable: 100

Note: This program demonstrates different storage classes in C:
- auto: default storage class, local scope
- static: retains value between function calls
- register: suggests variable to be stored in CPU register
- extern: global scope, defined elsewhere
*/

void autoClass(){
    auto int a = 5; //just like normal
    printf("%d",a);
}
void registerClass(){
    register int a = 5; //local but in register
    printf("%d\n",a);
}

void staticClass(){
    static int a = 5; //statically allocated in file
    printf("%d\n",a);
}

void externClass(){
    extern int a; //global throughout file
    printf("%d\n",a);
}

int main(){
    int a=4;
    printf("%d\n",a);
    autoClass();
    registerClass();
    staticClass();
    return 0;
}
