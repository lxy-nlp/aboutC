//
// Created by lxy on 2020/7/23.
//
#include<stdio.h>
int main(){
    int a[10] = {1,2,3,4,5};
    //数组名是一个常量,指针是变量
    int *pa;
    pa = a;
    printf("pa = %p,a[0]->address=%p a=%p\n",pa,&a[0],a);
    //地址在自增或自减时,自动将地址向后挪动一个单位长度
    printf("a[1]=%d,a[1]->address=%p\n",*++pa,pa);


    //字符指针与函数
    /*
     * char *message = "this is a String"
     * message 是指针 存放的是 字符串常量
     * *message存放的是第一个字符的地址
     * */
    char *pmessage;
    pmessage = "abcdefg";
    printf("pmessage=%s,*pmessage=%d\n",pmessage,*pmessage);
    printf("pmessage[0]=%s\n",pmessage);
    pmessage = "now is the space";
    printf("pmessage=%s,*pmessage=%d\n",pmessage,*pmessage);
    printf("pmessage[3]=%s\n",pmessage+3);
    char s=110;
    printf("s=%c\n",s);

}

//统计字符串长度
int computeLen(char *s){
    int n;
    for(n = 0;*s!='\0';s++)
        n++;
    return n;
}
