//
// Created by lxy on 2020/7/23.
//

/*指针数组和多维数组*/
#include<stdio.h>
int main(){
    int a[10][20];
    int *b[10]; //指针数组里存放的是指针
    char *name[] = {"Illegal manth", "Jan", "Feb", "Mar"};
    printf("%p\n",name[0]);
    printf("%s\n",*name);
//    for(int i=0;i<sizeof(name);i++)
//        printf("name=%s",name);
}
