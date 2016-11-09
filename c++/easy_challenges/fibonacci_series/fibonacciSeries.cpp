/*
Program: fibonacciSeries.cpp
Author: Seth Tucker
Date: 9/5/2016
Last Modified: 11/9/2016

Program takes input from a text file and computes the nth Fibonacci 
number where n is pulled from the text file. 
Ex: n = 5, nth Fibonacci number = 5
    n = 12, nth Fibonacci number = 144
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

//Compute nth Fibonacci number
long computeFib(long number){
	long fibNum = 0;
	//If number = 0
	if (number == 0) fibNum = 0;
	//If number = 1 or number = 2
	else if (number == 1 || number == 2) fibNum = 1;
	//Everything > 2
	else {
		long digitOne = 1;
		long digitTwo = 1;
		for (auto j = 2; j < number; j++) {
			fibNum = digitOne + digitTwo;
			digitOne = digitTwo;
			digitTwo = fibNum;
		}
	}
	return fibNum;
	
}  //End computeFib()

#ifndef UNIT_TESTING

int main(int argc, char *argv[]) {
	string fileName(argv[1]);
	ifstream source;
	source.open(fileName);
	
	//Get numbers from text file and store in a vector
	vector<long> numbers;
	if (source) {
		long value;
		while (source >> value) {
			numbers.push_back(value);
		}
	}
	source.close();

	//Compute nth Fibonacci number
	for (auto i = 0; i < numbers.size(); i++) {
		long fibNum = computeFib(numbers[i]);
		cout << fibNum << endl;
	}

	return 0;

}  //End main()


#endif