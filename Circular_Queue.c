#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue();
void dequeue();
void display();
int cqueue[size], front = -1, rear = -1;
void main()
{
	int choice, value;
	printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display \n 4.Exit \n");
	while(1)
	{
		printf("\n Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			break;
			default:printf("\n Entered choice is wrong!");
		}
	}
}
void enqueue()
{
	int value;
	if((front==0)&&(rear==4)||(front==rear+1))
	{
 		printf("\n Circular Queue is FULL");
	}
	else
	{
		printf("Enter element in Circular Queue:");
		scanf("%d",&value);
		if(front==-1)
		front++;
		if(rear==4)
		rear=0;
		else
		rear++;
		cqueue[rear]=value;
		display();
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("\n Circular Queue is EMPTY!");
	}
	else
	{
		printf("Deleted Element :%d \n",cqueue[front]);
		cqueue[front]=0;
		if(front==9)
		front=0;
		else
		front++;
		display();
	}
}
void display()
{
	int i;
	printf("front=%d & rear=%d \n",front,rear);
	if(front==-1)
	{
	 	printf("\n Circular Queue is EMPTY!");
	}
	else
	{
		printf("\n Circular Queue:");
		for(i=0;i<5;i++)
		{
			printf("%5d",cqueue[i]);
		}
	}
}
