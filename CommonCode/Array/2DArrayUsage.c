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

void MultiplyPointer(int *Array)
{
    int i, j;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            //*((Array+i*4)+j) = i*j;
            Array[i*4+ j] = i*j;
        }
    }
}

void Println(int Array[4][4])
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
    int Array_1[4][4];
    
    //Multiply(Array_1);
    MultiplyPointer(&Array_1[0][0]);
    Println(Array_1);
}
