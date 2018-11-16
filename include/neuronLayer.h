/** @file neuronLayer.h 
 * @brief This header file contains the structure of the NeuronLayer and its basic functions.
 */

#ifndef NEURON_LAYER_H
#define NEURON_LAYER_H

#include "../include/neuron.h"

/**
 * @brief The basic structure of a neuron layer.
 */
typedef struct NeuronLayer{
    Neuron** neurons; /**<The array of pointers to neurons which will compound the layer.*/
    int num_neurons; /**<THe number of Neurons in this layer.*/
} NeuronLayer;

/**
 * @brief Function to create a new NeuronLayer.
 * It allocates the necessary memory to create a neuron layer.
 * @param num: number of neurons of this layer.
 * @param value: the values to be stored by the neurons.
 * @param actVal: the activation values to be stored by the neurons.
 */
NeuronLayer* createNeuronLayer(int num, double* value, double* actVal);

/**
 * @brief Function to destroy a given neuron layer.
 * @param nl: The neural layer to destroy.
 */
void freeNeuronLayer(NeuronLayer* nl);

/**
 * @brief Function to set a new value to a given NeuronLayer.
 * @param nl: The neural layer to set new values.
 * @param value: The array of new values (must have the same length as the neural layer).
 */
void setValueNeuronLayer(NeuronLayer* nl, double* value);

/**
 * @brief Function to set an activation value given an activation function for a Neural Layer.
 * @param nl: The Neuron Layer we want to activate.
 * @param f: The activation function we will use.
 * @param prm: Parameters that might have the activation function.
 */
void activateNeuronLayer(NeuronLayer* nl, int (*f)(double x, double* y, void* prm), void* prm);

#endif