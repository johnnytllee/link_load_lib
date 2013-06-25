#include<stdio.h>
#include "bar.h"

int bar_f(int arg)
{
	printf("%s(%d)\n",__func__,arg);
	return(0);
}
