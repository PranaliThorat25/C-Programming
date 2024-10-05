#include<stdio.h>
#include<stdlib.h>
int fibonacci(int num)
{
	if(num == 0)
	{
		return 0;
	}
	else if(num == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}
int main(int argc, char const * argv[])
{
	int input_num;
	printf("\nNumbers in the Fibonacci Series are:\n0\t1\t1\t2\t3\t5\t8\t13\t21\t34\t");
	printf("\nEnter the number you want to find in fibonacci series:");
	scanf("%d",&input_num);
	int check = 0;
	int i = 0;
	while(input_num >= fibonacci(i))
	{
		if(input_num == fibonacci(i))
		{
			printf("%d, found in Fibonacci Series on %dth index\n",input_num,i);
			check = 1;
			break;
		}
		else
		{
			i = i++;
			continue;
		}
	}
	if(check != 1)
	{
		printf("%d number Not Found in the Fibonacci Series\n",input_num);
	}
	return 0;
}
