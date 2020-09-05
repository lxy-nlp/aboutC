#include<stdio.h>
int main(){
    FILE *fp;
    fp.fopen("/tmp/test.txt","w+");
    //写入文件的两种方法
    fprintf(fp,"This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n");
    fclose(fp);

    //读取文件
    char buff[255];
    fp = fopen("/tmp/test.txt","r");
    fscanf(fp,%s,buff);
}
