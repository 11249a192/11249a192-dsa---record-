ALGORITHM:

1. When the problem is reduced to a single disk, move that disk directly from Source to 
Destination, and return.  Base Condition. 
2. Move Top (n−1) Disks from Source to Auxiliary / Temporary rod using Des na on as temporary 
storage. 
3. Move the remaining disk from Source to Destination (Only one disk movement) 
4. Move (n−1) Disks from Auxiliary / Temporary to Des na on rod using Source as temporary 
storage 
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
