#include "headers/neuron.h"
#include <stdlib.h>

Neuron* createNeuron(double value, double actVal){
    Neuron *neuron = (Neuron *)malloc(sizeof(Neuron));

    neuron->val = value;
    neuron->actVal = actVal;

    return neuron;
}

void freeNeuron(Neuron* neuron){
    free(neuron);
}

void setValueNeuron(Neuron* neuron, double value){
    neuron->val = value;
}

void activateNeuron(Neuron* neuron, double (*f)(double x)){
    neuron->actVal = f(neuron->val);
}