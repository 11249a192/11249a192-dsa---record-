AIM:
To implement a program to find the nth fibonacci term using recursion

ALGORITHM:
1.read the vaalue of n
2.if n=0,return 0(base condition)
3.if n=1,return 1(base condition)
4.recursively compute: f(n)=f(n-1)+f(n-2)
5.display the returned value as the nth fibonacci term.

    PROGRAM:
#include<stdio.h>
int fib(int n)
{
    if (n==0)
    {
     return 0;
    }
    if (n==1)
    {
     return 1;
 }
 return fib(n-1)+fib(n-2);

}
int main()
{
    int n,result;
    printf("enter the integer number:");
    scanf("%d",&n);
    if (n<0)
    {
        printf("invalid number:");
        return 0;
    }
    result=fib(n);
    printf("fibonacci nth  term is %d:",result);
}
