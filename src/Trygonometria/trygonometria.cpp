#include "trygonometria.h"
#include <cmath>
double degreemath::sin(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
double pi = 3.141592653589793238462643383279502884;
        double  radian = pi*degree/180;
         return std::sin(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::cos(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
double pi = 3.141592653589793238462643383279502884;
	  double radian = pi*degree/180;
         return std::cos(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::tg(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
double pi = 3.141592653589793238462643383279502884;
	double radian = pi*degree/180;
         return std::tan(radian);   //funkcja biblioteczna z piku <cmath>
}
double degreemath::ctg(double degree) {
         //zamiana stopni na radiany:  pi radianów = 180 stopni
double pi = 3.141592653589793238462643383279502884;
double	radian = pi*degree/180;
double cot = 1/(std::tan(radian));
         return cot;   //funkcja biblioteczna z piku <cmath>
}
