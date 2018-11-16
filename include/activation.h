/** @file activation.h 
 * @brief This header file contains all the implemented activation functions and its derivatives.
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
 * @brief Logistic function
 * 
 * The logistic function is defined as:
 * \f[
 *      f(x) = \frac{1}{1-e^{-x}}.
 * \f]
 * @param x: Input value.
 * @param y: Pointer to the output value of the function.
 * @param prm: Pointer to parameters. Insert NULL pointer.
 * @return 1 if nothing wrong happenes, 0 otherwise.
 */
int ActivationLogistic(double x, double* y, void* prm);

/**
 * @brief Derivative of Logistic function
 * 
 * Given the logistic function \f$f(x)\f$, its derivative is computed
 * as \f$f'(x)=f(x)(1-f(x))\f$.
 * @param x: Input value.
 * @param y: Pointer to the output value of the function.
 * @param prm: Pointer to parameters. Insert NULL pointer.
 * @return 1 if Nothing wrong happenes, 0 otherwise.
 */
int DerivativeLogistic(double x, double* y, void* prm);

#endif