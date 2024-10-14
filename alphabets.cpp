#include<stdio.h>
int main()
{
	char alphabet;
	printf("Enter the Alphabet:");
	scanf("%c",&alphabet);
	if(	alphabet == 'a' || 
		alphabet == 'e' || 
		alphabet == 'i' || 
		alphabet == 'o' || 
		alphabet == 'u')
	{
		printf("Entered Alphabet is Vowel.");
	}
	else
	
	{
		printf("Entered Alphabet is Consonent.");
	}
	return 0;
}
