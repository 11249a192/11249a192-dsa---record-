
AIM:
To implement tower of hanoi using recursion to move n disks from sourse to destination rod

ALGORITHM:
1. check the  Base Condition. 
2. Move Top (n−1) Disks from Source to Auxiliary
3. Move the largest disk (nth disk) to destination
4. Move (n−1) Disks from Auxiliary  to destination
5. Repeat Recursively until base condition satisfied. 


PROGRAM:
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
