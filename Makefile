#!make -f

CXX=clang++-9 
CXXFLAGS=-std=c++2a

HEADERS := solver.hpp $(wildcard *.h*)
STUDENT_SOURCES := $(filter-out $(wildcard Test*.cpp), $(wildcard *.cpp))
STUDENT_OBJECTS := $(subst .cpp,.o,$(STUDENT_SOURCES))

run: test
	./$^

test: TestRunner.o Test_iris.o Test_shahar.o $(STUDENT_OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o test

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) --compile $< -o $@

Test: TestCounter.o Test.o $(STUDENT_OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o Test

demo: Demo.o $(STUDENT_OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o demo

clean:
	rm -f *.o test