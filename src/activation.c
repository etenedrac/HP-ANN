#include "../include/activation.h"
#include <math.h>

int ActivationLogistic(double x, double* y, void* prm){
    *y = 1./(1.+exp(-x));
    return 1;
}

int DerivativeLogistic(double x, double* y, void* prm){
    ActivationLogistic(x, y, prm);
    *y = (*y)*(1.-(*y));
    return 1;
}