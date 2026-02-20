#include<stdio.h>
void hanoi(int n,char s,char a,char d)
{
    if(n==1)
    {
        printf("move %d from %c to %c",n,s,d);
        return;
    }
    hanoi(n-1,s,a,d);
    printf("move %d from %c to %c",n,s,d);
    hanoi(n-1,a,d,s);
}
int main()
{
    int n;
    printf("enter the no of disks:");
    scanf("%d",&n);
    hanoi(n,'S','A','D');
}
