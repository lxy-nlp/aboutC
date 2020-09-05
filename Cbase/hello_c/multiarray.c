//
// Created by lxy on 2020/7/23.
//
/*多维数组的使用
 *多维数组的第一维可以不指定大小,其余各维必须指定大小
 *
 *
 * static 关键字
 * 被static修饰的变量和函数不能被外部访问,程序整个的运行期间都存在
 * */
#include<stdio.h>
int main(){
    static char daytab[2][13] = {
            {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
            {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    };
}
int day_of_year(int year,int month,int day)
{
    int i,leap;
    leap = year%4&&year%100!=0 || year%400==0;
    for(i=1;i<month;i++)
        day+=daytab[leap][i];
    return day;
}
void month_day(int year,int yearday,int *pmonth,int *pday)
{
    int i,leap;
    leap = year%4&&year%100!=0 || year%400==0;
    for(i=1;yearday>daytab[leap][i];i++)
        yearday -= daytab[leap][i];
    *pmonth = i;
    *pday = yearday;
}




