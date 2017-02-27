#include <stdio.h>

int main()
{
    int *BoxPosition;
    int Box;
    
    //Assing box to box index
    Box = 1234;
    BoxPosition = &Box;
    
    printf("%d\n",*BoxPosition);

    return 0;
}
