IDIR =../include
CC=g++ -std=c++11
CFLAGS=-I$(IDIR)

ODIR=../obj
LDIR =../lib

LIBS=-lm

_DEPS = romano.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = romano.o testa_romano.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

romano: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.cpplint: romano.cpp testa_romano.cpp
	cpplint --filter=-build/header_guard romano.cpp testa_romano.cpp $(DEPS) 

.cppcheck: 
	cppcheck --enable=warning .

.valgrind:
	valgrind --leak-check=full ./romano
	
.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 