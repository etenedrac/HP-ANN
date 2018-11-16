/** @file neuron.h 
 * @brief This header file contains the structure of the Neuron and its basic functions.
 */

#ifndef NEURON_H
#define NEURON_H

/**
 * @brief The basic structure of a Neuron.
 */
typedef struct Neuron{
    double val; /**< The value that collects this neuron.*/
    double actVal; /**< The activated value to send to the next neuron.*/
} Neuron;

/**
 * @biref Function to create a new neuron.
 * It allocates The necessary memory to create a neuron.
 * @param value: The value to be stored by the neuron.
 * @param actVal: The activation value to be stored by the neuron.
 */
Neuron* createNeuron(double value, double actVal);

/**
 * @brief Function to destroy a given neuron.
 * @param neuron: The neuron to delete.
 */
void freeNeuron(Neuron* neuron);

/**
 * @brief Function to set a new value to a given Neuron.
 * @param neuron: The neuron which will have a new value.
 * @param value: The new value of the neuron.
 */
void setValueNeuron(Neuron* neuron, double value);

/**
 * @brief Function to set an activation value given an activation function.
 * @param neuron: The neuron we want to activate.
 * @param f: The activation function we will use.
 * @param prm: Parameters that might have the activation function.
 */
void activateNeuron(Neuron* neuron, int (*f)(double x, double* y, void* prm), void* prm);

#endif