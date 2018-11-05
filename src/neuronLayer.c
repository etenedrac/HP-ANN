#include "../include/neuronLayer.h"
#include <stdlib.h>

NeuronLayer* createNeuronLayer(int num, double* value, double* actVal){

    //Allocating memory for the Neuron Layer:
    NeuronLayer* nl = (NeuronLayer*)malloc(sizeof(NeuronLayer));

    //Setting the number of neurons:
    nl->num_neurons = num;

    //Allocating memory for every neuron:
    nl->neurons = (Neuron **)malloc(num*sizeof(Neuron*));

    //Creating all the neurons
    for(int i=0; i<num; i++){
        nl->neurons[i] = createNeuron(value[i], actVal[i]);
    }

    return nl;
}

void freeNeuronLayer(NeuronLayer* nl){

    //Firs we destroy each neuron:
    for(int i=0; i<nl->num_neurons; i++){
        freeNeuron(nl->neurons[i]);
    }

    //Then the array of neurons:
    free(nl->neurons);

    //And finally the NeuronLayer itself:
    free(nl);
}

void setValueNeuronLayer(NeuronLayer* nl, double* value){
    
    //Setting the value for each neuron in the layer:
    for(int i=0; i<nl->num_neurons; i++){
        setValueNeuron(nl->neurons[i], value[i]);
    }
}

void activateNeuronLayer(NeuronLayer* nl, int (*f)(double x, double* y, void* prm), void* prm){

    //Setting the activation value for each neuron in the layer:
    for(int i=0; i<nl->num_neurons; i++){
        activateNeuron(nl->neurons[i], f, prm);
    }
}