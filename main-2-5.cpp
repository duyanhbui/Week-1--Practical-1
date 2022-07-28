#include <iostream>
#include <stdlib.h>

extern double is_descending(int*,int);

int main(int argc,char **argv)
{
    int array[5] = {33,22,11,2,1};
	std :: cout << is_descending(array,5) << std :: endl;
	return 0 ;
}
