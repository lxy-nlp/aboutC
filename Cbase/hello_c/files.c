#include<stdio.h>
int main(){
    FILE *fp;
    fp.fopen("/tmp/test.txt","w+");
    //д���ļ������ַ���
    fprintf(fp,"This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n");
    fclose(fp);

    //��ȡ�ļ�
    char buff[255];
    fp = fopen("/tmp/test.txt","r");
    fscanf(fp,%s,buff);
}
