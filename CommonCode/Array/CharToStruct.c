#include <stdio.h>
#include <string.h>

struct USB {
    int usb1;
    int usb2;
    int usb3;
};
static int SIZE;

void Println(char buf[])
{
    int i;
	struct USB *temp;
	
	temp = (struct USB *)buf;
	
    printf("Char array - usb1:[%d] usb2:[%d] usb3:[%d]\n", temp->usb1, 
													temp->usb2,
													temp->usb3);

}

int main()
{
    struct USB *mobile;
    char buf[SIZE];
	
	SIZE = sizeof(struct USB);
	
	memset(buf, 0, SIZE);
	mobile = (struct USB *)buf;
	mobile->usb1 = 7;
	mobile->usb2 = 8;
	mobile->usb3 = 9;
	
    Println(buf);
	
    return 0;
}
