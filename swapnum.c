//program to swap the number
#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("clear");
    int x,y,z,temp;
    printf("\n enter any 3 integer:\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("\n value of x and y and z before rotating:");
    printf("x=%d , y=%d , z=%d ",x,y,z);
    temp = x;
    x=y;
    y=z;
    z=temp;
    printf("\n vlaue of x ,y and z after rotating: ");
    printf("x=%d,y=%d,z=%d",x,y,z);
    
}