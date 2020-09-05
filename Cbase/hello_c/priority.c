//
// Created by lxy on 2020/7/23.
//
#include<stdio.h>
int main(){
    //运算符号和逻辑符号的优先级
    int *ip;
    int y=10;
    ip = &y;
    *ip += 1;//++*ip  (*ip)++
    y = *ip + 1; //　*和&的优先级比算数运算符高
    /*
     *
     *一元运算符和二元运算符的区别和联系
     * 一元运算符　在运算时只需要操作一个常量或者变量　　二元运算符　需要两个变量或者常量进行运算
     * 一元运算符　+ - & * 比　二元运算符的　+ - &  * 高
     * 一元运算符遵循从右向左的结合顺序
     * 二元运算符遵循从左向右的结合顺序
     * 一元运算符　++ -- + - *　这里的　*　是指针
     * 二元运算符　+ - * / %
     * 关系运算符  > >= < <= == !=　 后两个的运算符优先级比前四个的运算符低
     * 关系运算符的优先级比算术运算符　低
     * 逻辑运算符 &&  ||     &&　的优先级比　||　高　但都比关系运算符低
     * , 逗号运算符　　从右至左
     */
    int *p; // 创建指针变量，用于接收地址
    int t = 7;
    p = &t;
    printf("p = %p\n",p);
    printf("res = %d\n",*p--);//先对地址进行自增或自减操作，然后再进行取值操作
    printf("*p = %d\n",*p);
    printf("p = %p\n",p);
}
