#include <iostream>
#include <stdlib.h>

extern double weighted_average(int*,int);

int main(int argc,char **argv)
{
    int array[6] = {1,2,1,4,1,3};
	std :: cout << weighted_average(array,6) << std :: endl;
	return 0 ;
}
