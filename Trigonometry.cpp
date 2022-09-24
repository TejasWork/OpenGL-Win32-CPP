#include "Trigonometry.h"
#include <math.h>

#define CONSTANT 22.0/7.0/180.0

double sine(const long double& angle){
    return sinl(angle*CONSTANT);
}

double cosine(const long double& angle){
    return cosl(angle*CONSTANT);
}

double tangent(const long double& angle){
    return tanl(angle*CONSTANT);
}