/*作用域和变量*/
#include<stdio.h>
int g;//全局变量 全局变量会初始化
int gg = 20;
int main(){
    int a,b;//局部变量 创建时不会初始化 我们需要在创建时对其进行初始化，避免成为内存垃圾
    int c;
    a = 10;
    b = 20;
    c = a+b;
    printf("value of a = %d,b=%d and c=%d",a,b,c);
    int gg = 10;//若是局部变量和全局变量重名，局部变量会覆盖全局变量
    return 0;
}

