#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int number[], int size)
{
    int i, j;
    size = size - 1;
    for(i=size; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            if(number[j] > number[j+1])
                swap(&number[j], &number[j+1]);
        }
    }
    
}

void Println(int number[], int size)
{
    int i;
    for(i=0; i<(size-1); i++)
    {
        printf("[%d] ", number[i]);
    }
    printf("\n");
}

int main()
{
    int number[] = {10, 7, 6, 8, 32, 30, 41, 1, 56, 50, 5, 39, 61};
    int size = sizeof(number)/sizeof(int);
    
    Println(number, size);
    bubble(number, size);
    Println(number, size);
    
    return 0;
}
