#ifndef NEURON_H
#define NEURON_H

/**
 * Neuron Struct
 */
typedef struct Neuron{
    double val;
    double actVal;
} Neuron;

/**
 * Function to create a new neuron.
 * It allocates the necessary memory to create a neuron.
 * @param double value: the value to be stored by the neuron
 * @param double actVal: the activation value to be stored by the neuron
 */
Neuron* createNeuron(double value, double actVal);

/**
 * Function to destroy a given neuron.
 */
void freeNeuron(Neuron* neuron);

/**
 * Function to set a new value to a given Neuron
 */
void setValueNeuron(Neuron* neuron, double value);

/**
 * Function to set an activation value given an activation function
 * @param Neuron* neuron: the neuron we want to activate
 * @param double (*f)(double x): the activation function we will use
 */
void activateNeuron(Neuron* neuron, int (*f)(double x, double* y, void* prm), void* prm);

#endif