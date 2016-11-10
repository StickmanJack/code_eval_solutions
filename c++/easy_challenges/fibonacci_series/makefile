
EXENAME = fibonacciSeries.out
CXXFLAGS = -Wall -std=c++14
TESTHEADER = ../../../extras/catch/

all:program test

program:
	@echo "--- Compiling the main program ---"
	@echo "Adding extension .out to the binary for .gitignore"
	$(CXX) $(CXXFLAGS) -o $(EXENAME) fibonacciSeries.cpp

test:
	@echo "--- Compiling the test executable ---"
	$(CXX) $(CXXFLAGS) -o test_$(EXENAME) -I$(TESTHEADER) -DUNIT_TESTING test_fibonacciSeries.cpp fibonacciSeries.cpp

clean:
	@echo "No object files to clean for this project"

distclean: clean
	$(RM) $(EXENAME)
	$(RM) test_$(EXENAME)
