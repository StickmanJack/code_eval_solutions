'''
Program: fibonacciSeries.py
Author: Seth Tucker
Date: 10/21/2016
Last Modified: 10/21/2016

'''

#ERROR: When submited to CodeEval score is only 95
#There's an error somwhere

import sys

def computeFib(number):
  if number == 0:
    fibNum = 0
  elif number == 1:
    fibNum = 1
  else:
    fibNum = 0
    digitOne = 1
    digitTwo = 1
    for i in range(2, number):
      fibNum = digitOne + digitTwo
      digitOne = digitTwo
      digitTwo = fibNum
  return fibNum

def main():
  file = open(sys.argv[1], 'r')
  for number in file:
    number = number.strip()
    if len(number) == 0:
      continue
    print(computeFib(int(number)))

  file.close()

main()

  
