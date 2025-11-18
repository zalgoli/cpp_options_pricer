#pragma once
#ifndef NORMCDF_H
#define NORMCDF_H

inline double computeD1(double S, double K, double r, double sigma, double T);
inline double computeD2(double S, double K, double r, double sigma, double T);

double bs_call(double S, double K, double r, double sigma, double T);
double bs_put(double S, double K, double r, double sigma, double T);

#endif NORMCDF_H