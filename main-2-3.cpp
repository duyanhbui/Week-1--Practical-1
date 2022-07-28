#include <iostream>
#include <stdlib.h>

extern double two_five_nine(int*,int);

int main(int argc,char **argv)
{
    int array[5] = {1,2,9,5,5};
	two_five_nine(array,5);
	return 0 ;
}
