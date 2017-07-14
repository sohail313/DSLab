#include<stdio.h>
#include<std.lib>
#define MAX_SIZE 10

int  stack[MAX_SIZE],top=-1;
int isFull()
{
	return (top==MAX_SIZE)?1:-1;	
}
int isEmpty()
{
	return (top==-1)?1:-1;
	}
	int peek()
	{
		return stack[top];
		}
		void 
