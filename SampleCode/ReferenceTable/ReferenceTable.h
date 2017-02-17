#ifndef _REFERENCETABLE_H_
#define _REFERENCETABLE_H_
typedef enum {
	ERROR_A = 0,
	ERROR_B,
	ERROR_C,
	ERROR_DEFAULT
} ErrorCode;

static struct _errmap {
	char *code;
	char *desc;
} ErrorMap[] = {
	{"ERROR_A",           "Pass a option."},
	{"ERROR_B",           "Pass b option."},
	{"ERROR_C",           "Pass c option."},
	{"ERROR_DEFAULT",     "Default option."},
	{NULL,              NULL}
};
#endif
