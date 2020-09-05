union Data{
    int i;
    float f;
    char str[20];
}data;
/*
    共用体和结构体的区别
    结构体相当于java中的类
    共用体之间的成员关系是或
    他们使用同样一片内存空间，同一时间只使用一个变量，保证完好输出
*/
union Data data;
data.i = 10;
data.f = 2.5;
data.str = "C programming"
