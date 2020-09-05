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


int main(){
    Book book;
    strcpy(book.title,"C Programming");
    strcpy(book.author, "Nuha Ali");
    strcpy(book.subject, "C Programming Tutorial");
    book.book_id = 6495407;
    void * GetBook(Book *book);
    printf("book_id = %p",GetBook(&book));
    /*
     * 结构体指针和结构体
     * 结构体指针就是指向结构体的指针 -> 将结构体中的数据项取出来 p->item
     *                          .  (*p).item
     *
     *
     * /

    Book *tmp = &book;
    printf("tmp->title=%s",tmp->title);
}

void * GetBook(Book *book) //指针函数 返回值是一个指针 void * 指的是无类型指针,在实际应用中可以对其进行强制转换
{
    return book;
}
