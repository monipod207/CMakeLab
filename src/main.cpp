define _USE_MATH_DEFINES
#include<cmath>
#include"LaborkaConfig.h.in"
int main() {
 #ifdef USE_TRIGONOMETRY_DEGREE
double result = cos_degree(45.0);
 #else
double pi = 3.141592653589793238462643383279502884;
double result = cos(pi/4.0);
 #endif
 return result;}
