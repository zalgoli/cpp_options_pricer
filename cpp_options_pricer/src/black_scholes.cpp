#include "black_scholes.h"
#include "normcdf.h"
#include <cmath>

/*
S - Spot
K - Strike
r - risk-free rate
sigma - volatility
T - time to maturity
*/

inline double computeD1 (double S, double K, double r, double sigma, double T)
{
	return ((std::log(S / K)) + (r + 0.5 * sigma * sigma, 2) * T) / (sigma * std::sqrt(T));
}

inline double computeD2(double S, double K, double r, double sigma, double T)
{
	return computeD1(S, K, r, sigma, T) - (sigma * std::sqrt(T));
}

double bs_call(double S, double K, double r, double sigma, double T)
{
	double d1 = computeD1(S, K, r, sigma, T);
	double d2 = computeD2(S, K, r, sigma, T);

	return (S * normcdf(d1)) - (K * std::exp(-r * T) * normcdf(d2));
}

double bs_put(double S, double K, double r, double sigma, double T)
{
	double d1 = computeD1(S, K, r, sigma, T);
	double d2 = computeD2(S, K, r, sigma, T);

	return (K * std::exp(-r * T) * normcdf(-d2)) - (S * normcdf(-d1));
}
