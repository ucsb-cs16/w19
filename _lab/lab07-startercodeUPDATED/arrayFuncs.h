#ifndef ARRAYFUNCS_H
#define ARRAYFUNCS_H

#include <iostream>
#include <string>
#include <sstream> // for ostringstream

#include "tddFuncs.h"

std::string intToString(int i);
std::string arrayToString(int a[], int size);

int sumOfArray(int a[], int size);
int minOfArray(int a[], int size);
int maxOfArray(int a[], int size);
int countEvens(int a[], int size);
int countOdds(int a[], int size);
int countPrimes(int a[], int size);

#endif // ARRAYFUNCS_H
