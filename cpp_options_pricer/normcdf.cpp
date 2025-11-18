#include <cmath>

double norm_cdf(double x)
{
	return 0.5 * (1 + std::erf(x / sqrt(2)));
}