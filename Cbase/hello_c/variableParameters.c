#include <stdio.h>
#include <stdarg.h>

double average(int num,...) //参数类型不定，参数个数不定
{

    va_list valist; // valist指向可变参数的指针
    double sum = 0.0;
    int i;

    /* 为 num 个参数初始化 valist */
    va_start(valist, num);

    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++)     {
        sum += va_arg(valist, int); //为参数设置类型
    }     /* 清理为 valist 保留的内存 */
    va_end(valist);
    return sum/num;
    }
int main() {
printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
}
