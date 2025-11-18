#include <cmath>
#include "normcdf.h"

double norm_cdf(double x)
{
	return 0.5 * (1 + std::erf(x / std::sqrt(2)));
}