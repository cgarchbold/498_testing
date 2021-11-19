#! /usr/bin/make -f

CXX= g++ -c -Wall --std=c++17
OXX= g++ -Wall --std=c++17

EXECUTABLES=run-tests

all: $(EXECUTABLES)

clean:
	-rm *.o  $(EXECUTABLES)

run-tests: test_reversed.o GOOD-reversed.o
	$(OXX) -o $@ $^

%.o : %.cc
	$(CXX) -c -o $@ $<
