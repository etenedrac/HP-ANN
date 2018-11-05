#ifndef NEURON_LAYER_H
#define NEURON_LAYER_H

#include "../include/neuron.h"

/**
 * NeuronLayer Struct
 */
typedef struct NeuronLayer{
    Neuron** neurons;
    int num_neurons;
} NeuronLayer;

/**
 * Function to create a new NeuronLayer.
 * It allocates the necessary memory to create a neuron layer.
 * @param int num: number of neurons of this layer.
 * @param double* value: the values to be stored by the neurons.
 * @param double* actVal: the activation values to be stored by the neurons.
 */
NeuronLayer* createNeuronLayer(int num, double* value, double* actVal);

/**
 * Function to destroy a given neuron layer.
 * @param NeuronLayer* nl: The neural layer to destroy.
 */
void freeNeuronLayer(NeuronLayer* nl);

/**
 * Function to set a new value to a given NeuronLayer.
 * @param NeuronLayer* nl: The neural layer to set new values.
 * @param double* value: the array of new values (must have the same length as the neural layer).
 */
void setValueNeuronLayer(NeuronLayer* nl, double* value);

/**
 * Function to set an activation value given an activation function for a Neural Layer.
 * @param NeuronLayer* nl: the Neuron Layer we want to activate.
 * @param int (*f)(double x, double* y, void* prm): the activation function we will use.
 * @param void* prm: parameters that might have the activation function.
 */
void activateNeuronLayer(NeuronLayer* nl, int (*f)(double x, double* y, void* prm), void* prm);

#endif