# Specify extensions of files to delete when cleaning
CLEANEXTS   = o a gch so

# Specify the target file and the install directory
OUTPUTFILE  = libdistancias
INSTALLDIR  = ../../bin

# Compiler args
CC = gcc
args = -g -Wall -lm -fPIC

# Pattern rule to build an object file from a .c file
%.o: %.c
	$(CC) $(args) -c $^

# Default target
.PHONY: all
all: $(OUTPUTFILE)

# Build static and dynamic library
$(OUTPUTFILE): abs.o dh.o dlr.o dv.o
	ar rcs $@.a $^
	$(CC) -shared -o $@.so $^

.PHONY: install
install:
	mkdir -p $(INSTALLDIR)/static
	mkdir -p $(INSTALLDIR)/dynamic
	cp -p $(OUTPUTFILE).a $(INSTALLDIR)/static
	cp -p $(OUTPUTFILE).so $(INSTALLDIR)/dynamic

.PHONY: clean 
clean:
	for file in $(CLEANEXTS); do rm -f *.$$file; done
	rm $(INSTALLDIR)/static/$(OUTPUTFILE).a $(INSTALLDIR)/dynamic/$(OUTPUTFILE).so 2> /dev/null

# Dependencies
abs.o: abs.c
dh.o: dh.c distancias.h
dlr.o: dlr.c
dv.o: dv.c distancias.h