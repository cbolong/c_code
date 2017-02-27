#include <stdio.h>

void Println(int Array[], int Max)
{
    int i;
    for(i=0; i<Max; i++)
    {
        printf("[%d] ",Array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int tmp;
    
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void SortArray(int Array[], int Max)
{
    int i, j;
    for(i=0; i<Max; i++)
    {
        for(j=i; j<Max; j++)
        {
            if(Array[i]>Array[j])
                swap(&Array[i], &Array[j]);
        }
    }
}

int main()
{
    int IntArray[] = {2,5,3,6,9,1,0};
    int Max = sizeof(IntArray)/sizeof(int);
    
    Println(IntArray, Max);
    SortArray(IntArray, Max);
    Println(IntArray, Max);
    return 0;
}
