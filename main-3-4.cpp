#include <iostream>
#include <stdlib.h>

extern void print_pass_fail(char);

int main(int argc,char **argv)
{
    char grade = 'A';
	print_pass_fail(grade);
	return 0 ;
}
