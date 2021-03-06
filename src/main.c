#include <stdio.h>
#include "../include/neuron.h"
#include "../include/activation.h"

int main(int argc, char** argv){

    printf("Hello World!\n");

    Neuron *n = createNeuron(1.3, 3);
    
    printf("The value of the neuron is: %f\n", (n->val));
    
    activateNeuron(n, ActivationLogistic, NULL);
    printf("The activation value of the neuron is: %f\n", (n->actVal));


    freeNeuron(n);
    printf("The value of the neuron is: %f\n", (n->val));

    return 0;
}