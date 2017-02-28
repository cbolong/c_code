#include <stdio.h>

void Multiply(int Array[4][4])
{
    int i, j;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            Array[i][j] = i*j;
        }
    }
}
void PrintlnOneD(int Array[])
{
    int i;
    
    for(i=0; i<4; i++)
    {
        printf("###[%d] [%p]",Array[i], &Array[i]);
        printf("\n");
    }
}

void PrintlnTwoD(int Array[4][4])
{
    int i, j;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("[%d] ",Array[i][j]);
        }
        printf("\n");
    }
}

void PrintlnTwoD2(int Array[][4])
{
    int i, j;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("[%d] ",Array[i][j]);
        }
        printf("\n");
    }
}
void PrintlnTwoD3(int (*Array)[4])
{
    int i, j;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("[%d] ",Array[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int Array_0[4] = {1, 2, 3, 4};
    int Array_1[4][4];
    int i;
    
    for(i=0; i<4; i++)
    {
        printf("@@@[%d] [%p]",Array_0[i], &Array_0[i]);
        printf("\n");
    }
    PrintlnOneD(Array_0);
    
    Multiply(Array_1);
    //PrintlnTwoD(Array_1);
    //PrintlnTwoD(Array_1);
    PrintlnTwoD3(Array_1);
}
