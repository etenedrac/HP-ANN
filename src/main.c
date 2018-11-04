#include <stdio.h>
#include "headers/neuron.h"
#include "headers/activation.h"

int main(int argc, char** argv){

    printf("Hello World!\n");

    Neuron *n = createNeuron(1.3, 3);
    
    printf("The value of the neuron is: %f\n", (n->val));
    
    activateNeuron(n, ActivationLogistic);
    printf("The activation value of the neuron is: %f\n", (n->actVal));


    freeNeuron(n);
    printf("The value of the neuron is: %f\n", (n->val));

    return 0;
}