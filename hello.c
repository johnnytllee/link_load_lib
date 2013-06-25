#include<stdio.h>

int global_init = 3;
int global_init_zero = 0;
int global_uninit; 
static int static_global_init = 5;
static int static_global_init_zero = 0;
static int static_global_uninit;

#define PRINT(name) printf("%s = %d\n",#name, name)

int niam(int argc)
{
	int niam_local_init = 17;
	int niam_local_init_zero = 0;
	int niam_local_uninit;
	static int niam_static_local_init = 19;
	static int niam_static_local_init_zero = 0;
	static int niam_static_local_uninit;
	printf("\n%s(%d)\n",__PRETTY_FUNCTION__,argc);
	PRINT(niam_local_init);
	PRINT(niam_local_init_zero);
	PRINT(niam_local_uninit);
	PRINT(niam_static_local_init);
	PRINT(niam_static_local_init_zero);
	PRINT(niam_static_local_uninit);
	do {
		int niam_block_init = 21;
		int niam_block_init_zero = 0;
		int niam_block_uninit;
		static int niam_static_block_init = 23;
		static int niam_static_block_init_zero = 0;
		static int niam_static_lock_uninit;
		PRINT(niam_block_init);
		PRINT(niam_block_init_zero);
		PRINT(niam_block_uninit);
		PRINT(niam_static_block_init);
		PRINT(niam_static_block_init_zero);
		PRINT(niam_static_lock_uninit);
	} while(0);
	return(0);
}

int main(int argc, char *argv[])
{
	int local_init = 7;
	int local_init_zero = 0;
	int local_uninit;
	static int static_local_init = 9;
	static int static_local_init_zero = 0;
	static int static_local_uninit;

	printf("Hello %s(%d,%s)\n",__PRETTY_FUNCTION__,argc,argv[0]);
	PRINT(global_init);
	PRINT(global_init_zero);
	PRINT(global_uninit);
	PRINT(static_global_init);
	PRINT(static_global_init_zero);
	PRINT(static_global_uninit);
	PRINT(local_init);
	PRINT(local_init_zero);
	PRINT(local_uninit);
	PRINT(static_local_init);
	PRINT(static_local_init_zero);
	PRINT(static_local_uninit);
	do {
		int block_init = 13;
		int block_init_zero = 0;
		int block_uninit;
		static int static_block_init = 15;
		static int static_block_init_zero = 0;
		static int static_lock_uninit;
		PRINT(block_init);
		PRINT(block_init_zero);
		PRINT(block_uninit);
		PRINT(static_block_init);
		PRINT(static_block_init_zero);
		PRINT(static_lock_uninit);
	} while(0);
	niam(54068);
	return(0);
}
