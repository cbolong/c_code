#include <stdio.h>
#include <string.h>

struct USB {
    int usb1;
    int usb2;
    int usb3;
};

void AssignValue(struct USB usb[])
{
    int i;
    static int count = 0;
    for(i=0; i<3; i++)
    {
        ++count;
        usb[i].usb1 = 1*count;
        usb[i].usb2 = 2*count;
        usb[i].usb3 = 3*count;
    }
}

void AssignValuePointer(struct USB usb[])
{
    int i;
    static int count = 0;
    struct USB temp;
	//memset(usb, 0, sizeof(usb));
    for(i=0; i<3; i++)
    {
        ++count;
        temp.usb1 = 1*count;
        temp.usb2 = 2*count;
        temp.usb3 = 3*count;
        //usb[i] = temp;
        memcpy(&usb[i], &temp, sizeof(struct USB));
    }
}

void Println(struct USB usb[])
{
    int i;
    for(i=0; i<3; i++)
    {
        printf("usb1:[%d] usb2:[%d] usb3:[%d]\n", usb[i].usb1, 
                                                  usb[i].usb2,
                                                  usb[i].usb3);
    }
}

int main()
{
    struct USB mobile[3];
    //mobile.usb1 = 0;
    //mobile.usb2 = 1;
    //mobile.usb3 = 2;
    //AssignValue(mobile);
    AssignValuePointer(mobile);	
    Println(mobile);

    return 0;
}