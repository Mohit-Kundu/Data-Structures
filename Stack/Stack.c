#include <stdio.h>
#include <stdlib.h>
#define sz 10
void push(int s[sz],int *top,int item)
{
	if(*top==sz-1)
	{
		printf("Element cannot be inserted, Stack overflow/full\n");
		return;
	}
	else
	{
		*top=*top+1;
		s[*top]=item;
	}
}
void pop(int s[sz],int *top)
{
	if(*top==-1)
	{
		
		printf("Stack empty/underflow\n");
		return;
	}
	else
	{
		printf("%d deleted\n",s[*top]);
		*top=*top-1;
	}
}
void display(int s[sz],int top)
{
		int i;
		if(top==-1)
		{
			printf("Stack underflow/empty\n");
			return;
		}
		else
		{	
			printf("Elements are:\n");
			for(i=0;i<=top;i++)
			{
				printf("%d\n",s[i]);
			}
		}
}
int main()
{
	int top=-1;
	int s[sz];
	int ch,element;
	for(;;)
	{
		printf("\nEnter 1.Push 2.Pop 3.Display 4.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter element: ");
					scanf("%d",&element);
					push(s,&top,element);
					break;
			
			case 2: pop(s,&top);
					break;
				
			case 3: display(s,top);
					break;
				
			case 4: exit(0);
				
			default: printf("Invalid Choice\n");
					break;
		}
	}
}
		
		
