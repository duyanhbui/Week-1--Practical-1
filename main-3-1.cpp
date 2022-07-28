#include <iostream>
#include <stdlib.h>

extern double is_fanarray(int*,int);

int main(int argc,char **argv)
{
    int array[5] = {1,2,3,2,1};
	std :: cout << is_fanarray(array,5) << std :: endl;
	return 0 ;
}
