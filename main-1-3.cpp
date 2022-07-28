#include <iostream>
#include <stdlib.h>

extern double num_count(int*,int,int);

int main(int argc,char **argv)
{
    int array[5] = {1,2,2,4,5};
	std :: cout << num_count(array,5,2) << std :: endl;
	return 0 ;
}
