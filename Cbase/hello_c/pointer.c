#include<stdio.h>
int main(){
    int var = 20;
    int *ip; //ָ定义指针变量
    ip = &var;//　＆　取地址符
    //printf("value = %d",*ip); // 此处 * 是取值符号

    // C语言默认是按值传递的
    int x = 50,y =30;
    printf("x= %d,y=%d in main\n",x,y);
    printf("x->address = %p,y->address = %p in main\n",&x,&y);
    void swap_0(int x,int y);
    swap_0(x,y);
    printf("x= %d,y=%d in main\n",x,y);
    void swap_1(int *x, int *y);
    swap_1(&x,&y);
    printf("x= %d,y=%d in main\n",x,y);
    printf("x->address = %p,y->address = %p in main\n",&x,&y);
}
void swap_0(int x ,int y){
    int tmp = x;
    x = y;
    y = tmp;
    printf("x y in swap = %d,%d\n",x,y);
}

void swap_1(int *x, int *y)
{
    int tmp = *x;
    *x= *y;
    *y = tmp;
    //printf("x y in swap = %d,%d\n",*x,*y);
    printf("x->address = %ls,y->address = %ls in swap_1\n",x,y);
}
void swap_2(int *x,int *y){
    int *tmp = x;
    x= y;
    y= tmp;
    printf("x->address = %ls,y->address = %ls in swap_2\n",x,y);
}
