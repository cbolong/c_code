#include <stdio.h>
#include <string.h>

struct man
{
	char name;   //1 byte
	int age;     //4 byte
	long weight; //8 byte
};

union woman
{
	char name;
	int age;
	long weight;
};

int main()
{
	struct man Jack;
	union woman Marry;
	
	Jack.name = 'J';
	Jack.age = 20;
	Jack.weight = 200;
	
	Marry.name = 'M';
	Marry.age = 11;
	Marry.weight = 50;
	
	printf("Jack:  [%c] [%d] [%d]\n", Jack.name, Jack.age, Jack.weight);
	printf("Jack:  size [%d]\n", sizeof(struct man));
	printf("Marry: [%c] [%d] [%d]\n", Marry.name, Marry.age, Marry.weight);
	printf("Marry: size [%d]\n", sizeof(union woman));
	
    return 0;
}
