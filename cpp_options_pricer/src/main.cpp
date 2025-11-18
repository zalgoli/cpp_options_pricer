#include <iostream>
#include "normcdf.h"


int main()
{

	std::cout << norm_cdf(1) << "\n";
	std::cout << norm_cdf(0) << "\n";
	std::cout << norm_cdf(-1) << "\n";


	return 0;
}