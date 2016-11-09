'''
Program: fizzBuzz.py
Author: Seth Tucker
Date: 10/20/2016
Last Modified: 10/20/2016

Program takes input form a text file in the format: 3 5 10. Each
line is pulled out and processed where the first number = first divisor,
second number = second divisor, and third number = upper bound. These
numbers are then passed to a function that computes fizzbuzz for every
number from 1 to n where n is the upper bound. If a number is divisible
by both first and second divisor, output = FB for fizzbuzz; if a number is
only divisible by the first divisor, output = F for fizz; if a number is
only divisible by the second divisor, output = B for buzz; if a number is
not divisible by either divisor, output = that number.
'''

import sys

def fizzBuzz(numbers):
    firstDivisor = numbers[0]
    secondDivisor = numbers[1]
    count = numbers[2]

    for i in range (0, count):
        if i % firstDivisor == 0 and i % secondDivisor == 0:
            print("FB")
        elif i % firstDivisor == 0:
            print("F")
        elif i % secondDivisor == 0:
            print("B")
        else:
             print(i)


def main():
    numbers = []
    with open('text.txt') as f:
        for line in f:
            numbers.append(line[0])
            numbers.append(line[1])
            numbers.append(line[2])
            fizzBuzz(numbers)
        
main()
