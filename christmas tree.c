#include<stdio.h>
//author:sibiraj 
int standfun();
int initialfun();
int loop();
int structure(int);
int days,initial,stand;
int main()
{
	scanf("%d",&days);
	if(days==1)
	{
		printf("you cannot print the tree");
	}
	else if(days>20)
	{
		printf("tree is no more");
	}
	else 
	{
	initial=days;
	stand=days;
	initialfun();
	loop();
	standfun();
}
return 0;
}
int initialfun()
{
	int i;
	for(i=1;i<=initial;i++)
	{
		printf("\t");
	}
	printf("*");
	printf("\n");
}

int standfun()
{
	int count,i;
	count=2;
	while(count)
	{

	for(i=1;i<=stand;i++)
	{
		printf("\t");
	}
	printf("*");
	printf("\n");
	count--;
	}	
}

int loop()
{
	int count,intermediate,tab;
	intermediate=days;
	count=days-1;
	while(count)
	{
		structure(intermediate);
		intermediate--;
		count--;
	}	
}
int structure(argument)
{
	int tab,stars,i;
	tab=days-1;
	stars=3;
	while(argument)
	{
		for(i=1;i<=tab;i++)
		{
			printf("\t");
		}
		for(i=1;i<=stars;i++)
		{
			printf("*\t");
		}
		printf("\n");
		stars=stars+2;
		argument--;
		tab--;
	}
}

