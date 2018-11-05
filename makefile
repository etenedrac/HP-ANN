IDIR =include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR = obj
LDIR = lib
SRC = src
BIN = bin

LIBS=-lm

_DEPS = neuron.h activation.h neuronLayer.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o neuron.o activation.o neuronLayer.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: $(SRC)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(BIN)/main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 