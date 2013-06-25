#include<stdio.h>
#include "foo.h"
#include "bar.h"

int foo_f(int arg)
{
	printf("%s(%d)\n",__func__,arg);
	bar_f((arg+54067));
	return(0);
}
