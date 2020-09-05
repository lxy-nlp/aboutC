#include<stdio.h>
#include<string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void getStructure();
int main(){
    getStructure();
    return 0;
}
void getStructure()
{
    struct Books book1;
    struct Books book2;
    strcpy(book1.title,"C programming");
    strcpy(book1.author,"Nuha Ali");
    strcpy(book1.subject,"C programming")
    book1.book_id = 12345;
    printf(book1.title+"----")
}
