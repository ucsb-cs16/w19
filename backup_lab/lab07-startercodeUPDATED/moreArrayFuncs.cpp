#include <cassert>
#include "moreArrayFuncs.h"

// a: an array of ints.  size is how many ints in array
// Return the index of largest value.  
// If more than one element has largest value, 
// break tie by returning the smallest index that
// corresponds to an element with the largest value.
// You may assume size >= 1

int indexOfMax(int *a, int size) {
  assert(size >= 1);
  return -42; // STUB !!! Remove and replace with correct code
}

// a: an array of ints.  size is how many ints in array
// Return the index of smallest value.  
// If more than one element has largest value, 
// break tie by returning the smallest index that
// corresponds to an element with the largest value.
// You may assume size >= 1
int indexOfMin(int *a, int size) {
  assert(size >= 1);
  return -42; // STUB !!! Remove and replace with correct code
}

// a: an array of ints.  size is how many ints in array
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume size >= 1
int largestValue(int *a, int size) {
  assert(size >= 1);
  return -42; // STUB !!! Remove and replace with correct code
}

// a: an array of ints.  size is how many ints in array
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume size >= 1

int smallestValue(int *a, int size) {
  assert(size >= 1);
  return -42; // STUB !!! Remove and replace with correct code
}


// a: an array of ints.  size is how many ints in array
// Return the sum of all the elements in the array
// size may be 0 in this case, or non-zero.

int sum(int *a, int size) {
  return -42; // STUB
}


// dest is an array of int that has capacity at LEAST of size n
// (whatever is in dest will be written over, so is irrelevant)
// src is an array of int of at least size n
// n is number of elements in src to be copied
// copy n elements from src to dest.

void copyElements(int *dest, int *src, int n) {
  // STUB: Fix this
}

// dest is an array of int that has capacity at LEAST of size n
// (whatever is in dest will be written over, so is irrelevant)
// src is an array of int of at least size n
// n is number of elements in src to be copied
// copy ONLY the elements with odd values from src to dest.
// return the number of elements that were copied

int copyOddOnly(int *dest, int *src, int n) {
  return -42; // stub @@@ FIX THIS 
}

// a, b and product are all arrays of size n (or greater)
// in each case, only the first n elements of a, b and product are used
// a and b have their values read, and are unchanged
// the old values in product are ignored, and overwritten.
// After this function, each element of product should
// contain the product of the corresponding elements of 
// a and b.
// Example if a is {1,2,3,4} b is {3,5,7,9} and n=4,
// then after a call to multiplePairwise(a,b,product,4), 
// product will be {3,10,21,36}.

void multiplyPairwise(int *a, int *b, int *product, int n) {
  // STUB; fix this
}

