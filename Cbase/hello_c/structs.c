//
// Created by lxy on 2020/7/24.
//
#include<stdio.h>
#include<string.h>


typedef struct Books{
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
}Book;


/*
  * 结构体指针和结构体
  * 结构体指针就是指向结构体的指针 -> 将结构体中的数据项取出来 p->item  结构体指针用->
  *                          .  (*p).item                    结构体用 .
  * /

int main(){
 Book  book; //指针的作用是指向一个地址,没有给他赋值却想要取值这种做法是错误的
 /*赋值操作*/
    strcpy(book.title,"C Programming");
    strcpy(book.author, "Nuha Ali");
    strcpy(book.subject, "C Programming Tutorial");
    book.book_id = 6495407;
    void printBook(Book *book);
    printBook(&book);
    return 0;
}
void printBook(Book *book){
    printf("book->title = %s\n",(*book).title);
}

