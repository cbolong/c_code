#include <stdio.h>
#include <string.h>

#define MAX 16

void push(int Stack[], int i, int index)
{
	Stack[index] = i;
}

void pop(int Stack[], int index)
{
	Stack[index] = -1;
}

void Println(int Stack[], int index)
{
	int i;
	for(i=0; i<index; i++)
		printf("[%d] ",Stack[i]);
	printf("\n");
}

int main()
{
	int Stack[MAX];
	int i = 0;
	int val = 0;
	int opt = 0;
	
	while(i<MAX)
	{
		printf("1. PUSH  2. POP  3. exit\n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 1:
				scanf("%d", &val);
				printf("Push %d to stack\n", val);
				push(Stack, val, i);
				i++;
				Println(Stack, i);
				break;
			case 2:
				printf("Pop from stack\n", val);
				pop(Stack, i);
				i--;
				Println(Stack, i);
				break;
			default:
				printf("Exit\n");
				return 0;
		}
	}
	
	
    return 0;
}
