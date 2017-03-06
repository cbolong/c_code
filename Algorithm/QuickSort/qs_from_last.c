#include <stdio.h>

/*
Input : 10, 7, 6, 8, 32, 30, 41, 1, 56, 50, 5, 39, 61
*/
int size;

void swap(int *i, int *j)
{
	int tmp;
	tmp = *i;
	*i = *j;
	*j = tmp;
}

void Println(int table[], int size)
{
	int i;
	for(i=0; i<size; i++)
		printf("[%2d] ", table[i]);
	printf("\n");
}
void quicksort(int table[], int left, int right)
{
	//from the last one
	int pivot = table[right];
	int left_index = left;
	int right_index = right-1;
	
	if(left >= right)
		return;
	
	while(1)
	{
		while(left_index <= right && table[left_index]<pivot)
		{
			left_index++;
		}
		while(right_index > left && table[right_index]>pivot)
		{
			right_index--;
		}
		if(left_index >= right_index)
			break;
		swap(&table[left_index], &table[right_index]);
	}
	swap(&table[right], &table[left_index]);
	quicksort(table, left, right_index);
	quicksort(table, right_index+1, right);
}

void main()
{
	int table[] = {10, 7, 6, 8, 32, 30, 41, 1, 56, 50, 5, 39, 61};
	size = sizeof(table)/sizeof(int);
	Println(table, size);

	quicksort(table, 0, (size-1));
	Println(table, size);
	
}