#include "headers/activation.h"
#include <math.h>

double ActivationLogistic(double x){
    return 1./(1.+exp(-x));
}

double DerivativeLogistic(double x){
    return ActivationLogistic(x)*(1.-ActivationLogistic(x));
}