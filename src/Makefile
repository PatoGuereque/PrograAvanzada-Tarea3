# Specify extensions of files to delete when cleaning
CLEANEXTS   = os od

# Specify the target file and the library directory
OUTPUTFILE  = main
LIBDIR  = ../bin

# Compiler args
CC = gcc
args = -g -Wall -ldistancias -lm

# Default target
.PHONY: all
all: $(OUTPUTFILE)

# Build main with static and dynamic linking
# main.os => output with static linking
# main.od => output with dynamic linking
$(OUTPUTFILE): main.c
	$(CC) $^ -L$(LIBDIR)/static $(args) -o $@.os
	$(CC) $^ -L$(LIBDIR)/dynamic $(args) -o $@.od

.PHONY: clean 
clean:
	for file in $(CLEANEXTS); do rm -f *.$$file; done