#include <stdio.h>
/* Uninitialized global var */
int bss_var;
/* Initialized global var */
int data_var = 1;

int main (int argc, char **argv)
{
	void *stack_var;
	stack_var = (void *)main;
	printf("Hello, main is excuting at %p\n",stack_var);
	printf("This address %p is our stack frame \n",&stack_var);
	/* bss section contain uninitialized data */
	printf("This address %p is our bss frame \n",&bss_var);
	/* data section contain initialized data */
	printf("This address %p is our data frame \n",&data_var);
	return 0;
}