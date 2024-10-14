#include<stdio.h>


void Insert();
void Delete();
void Print();




int queue[5];
int front,rear,op,n=0;

void main()
{
	
    printf(" 1 Insert\n 2 Delete\n 3 Print\n 4 Exit");
    
    rear = 0 ;
	front = 0;
	
    do{
    	printf("\n Choose operation number: ");
    	scanf("%d",&op);
    	if(op > 4 || op < 1)
    	    printf("\n Wrong Option.");
    	    
    	switch(op)
    	{
    		case 1 : Insert();break;     
    		case 2 : Delete();break;     
    		case 3 : Print(); break;    
    		default : break;
		}
	}while(op != 4);

	
}
void Insert()
{
	int num;
	
	
	if(n >= 5)
	{
		printf("\n Queue is Overflow! ");
	}
	else
	{
	 printf("\n Enter Element to add in queue: ");
	 scanf("%d",&num);
	 queue[rear] = num;
	 n++;
	 rear = (rear + 1) % 5;
	 
	 Print();
    }
	
	
	
}
void Delete()
{
	if(n > 0)
	{
	    printf("\n %d is deleted from queue.",queue[front]);
	    front = (front + 1)%5;
	    n--;
	}
	else
	{
		printf("\n Queue is Empty");
	}
}


void Print()
{
	int t=1,i = front;
		
	while(t <= n)
	{
		printf("\n Queue[%d] = %d",i,queue[i]);
		t++;
		i = (i+1) % 5;
	}
	
	printf("\n Rear : %d", rear);
	printf("\n Front : %d", front);
	printf("\n No. of Elements : %d",n);
}
