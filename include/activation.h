/**
 * This header file contains all the implemented activation functions and its derivatives.
 * 
 * In order to difference both tyes of functions, we have set the following nomenclature:
 *     - Activation$FUNC: implementation of the activation function FUNC.
 *     - Derivative$FUNC: implementation of the derivative of the activation function FUNC.
 * 
 * All the functions will have 3 main parameters:
 *     - x: the input value
 *     - y: the output value
 *     - (void*) prm: an array of parameters
 * 
 * The output of the functions will be 1 if no error has happened.
 * 
 * Up to now, the implemented activation functions are:
 *     - Logistic
 */

#ifndef ACTIVATION_H
#define ACTIVATION_H

/**
 * Logistic
 */
int ActivationLogistic(double x, double* y, void* prm);
int DerivativeLogistic(double x, double* y, void* prm);

#endif