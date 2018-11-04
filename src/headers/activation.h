/**
 * This header file contains all the implemented activation functions and its derivatives.
 * 
 * In order to difference both tyes of functions, we have set the following nomenclature:
 *     - Activation$FUNC: implementation of the activation function FUNC.
 *     - Derivative$FUNC: implementation of the derivative of the activation function FUNC.
 * 
 * Up to now, the implemented activation functions are:
 *     - Logistic
 */

#ifndef ACTIVATION_H
#define ACTIVATION_H

/**
 * Logistic
 */
double ActivationLogistic(double x);
double DerivativeLogistic(double x);

#endif