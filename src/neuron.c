#include "../include/neuron.h"
#include <stdlib.h>
#include <stdio.h>

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

void activateNeuron(Neuron* neuron, int (*f)(double x, double* y, void* prm), void* prm){
    if(f(neuron->val, &(neuron->actVal), prm)){
    }else{
        fprintf(stderr, "INVALID ACTIVATION FUNCTION!!!\n");
    }
}