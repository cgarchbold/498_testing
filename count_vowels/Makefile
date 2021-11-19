#! /usr/bin/make -f

CXX=g++ -Og -g --std=c++17

EXECUTABLES=run-tests main

all: $(EXECUTABLES)

clean:
	-rm *.o tests/*.o $(EXECUTABLES)

run-tests: tests/test_count_vowels.o count_vowels.o
	$(CXX) -o $@ $^

main: count_vowels.o main.o
	$(CXX) -o $@ $^

%.o : %.cc
	$(CXX) -c -o $@ $<
