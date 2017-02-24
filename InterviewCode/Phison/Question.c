#include <stdio.h>
#include <stdlib.h>

void ListNumber(unsigned int *a)
{
	int i = 0;
	int begin, end;
	int count = 0;
	
	while(count<a[0])
	{
		printf("[%d] ",count);
		count++;
	}
		
	//index top is 19,
	for(i=0; i<19; i++)
	{
		begin = a[i];
		end = a[i+1];
		count = begin+1; //ignore the first number
		while(count<end)
		{
			printf("[%d] ",count);
			count++;
		}
	}
	
	count = a[19];
	while(count<501)
	{
		printf("[%d] ",count);
		count++;
	}
	printf("\n");
}

void ListLimitNumber(unsigned int *a, int limit, int size)
{
	int i = 0;
	int index = 0;
	while(1)
	{
		if(index < size && a[index]>(limit)*100)
			break;
		index++;
	}
	printf("##########index:[%d]###########\n",index);
	
	for(i=limit*100; i<(limit+1)*100; i++)
	{
		if(index<size && a[index]==i)
			index++;
		else
			printf("[%d] ",i);
	}
	printf("\n");
}
void main(void)
{
	unsigned int a[20]={1,5,9,11,18,21,23,53,200,230,330,331,332,333,400,401,405,430,450,480};
	int i = 0;
	
	/*Question 1*/
	//ListNumber(a);
	/*Question 1 end*/
	int size = sizeof(a)/sizeof(unsigned int);
	
	/*Question 2*/
	for(i=0; i<3; i++)
	{
		ListLimitNumber(a, i, size);
	}
	/*Question 2 end*/
	
}
