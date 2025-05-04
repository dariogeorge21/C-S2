#include<stdio.h>

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
