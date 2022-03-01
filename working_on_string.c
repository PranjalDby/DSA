#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 10
char func(char * name){
    printf("name that paased to function:%s\t",name);
}
int func3()
{
    return 56;
}
void func1(int id,int roll,int funcs())
{
    printf("function Is:%d\t",funcs());
}
int main()
{
    char name[Max];
    int i,id=3,roll=45;
    printf("enter the name:\n");
    gets(name);
    func1(5,6,func3);
    func(name);
}