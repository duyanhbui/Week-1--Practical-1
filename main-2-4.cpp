#include <iostream>
#include <stdlib.h>

extern double is_ascending(int*,int);

int main(int argc,char **argv)
{
    int array[5] = {1,2,3,4,5};
	std :: cout << is_ascending(array,5) << std :: endl;
	return 0 ;
}
