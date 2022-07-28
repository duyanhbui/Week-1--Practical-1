#include <iostream>
#include <stdlib.h>

extern double count_evens(int);

int main(int argc,char **argv)
{
	std :: cout << count_evens(5) << std :: endl;
	return 0 ;
}
