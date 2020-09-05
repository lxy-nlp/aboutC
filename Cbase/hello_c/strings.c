// 字符串本质上是使用null字符终止的字符数组
char greeting[6] = {'H','e','l','l','o'};
char greeting[] = "Hello"
//字符串的操作
char s1[8] = "Hello"
char s2[8] = "world"
char s3[8]
strcpy(s3,s1); //将s1复制到s3
strcat(s1,s2);//将s1和s2连接
int len = 0;
len = strlen(s1);
return 0;

//字符串数组和字符串常量的区别和联系
char *greetings = "Hello world"; //用指针接收字符串常量，指针中存储的是字符串的第一个字符的地址，类似于数组
/*
字符串常量一旦确定就不更改
字符串数组 可以更改

*/

