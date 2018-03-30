#include "arrayFuncs.h"
#include "moreArrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  int zeros[3]={0,0,0}; // initializes all elements to 0  
  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  int meaning[] = {42};
  int mix1[10]={-42,12,-9,56,123,32767,48}; // last three will be zero
  int mix2[10]={-42,12,-9,56,123,32767,48,12,-43,-43};
  int descending[] = {5,4,3,2,1};


  ASSERT_EQUALS(3, largestValue(fiveThrees,5));
  ASSERT_EQUALS(0, largestValue(zeros,3));
  ASSERT_EQUALS(11, largestValue(primes,5));
  ASSERT_EQUALS(29, largestValue(primes,10));
  ASSERT_EQUALS(42, largestValue(meaning,1));
  ASSERT_EQUALS(32767, largestValue(mix1,10));
  ASSERT_EQUALS(32767, largestValue(mix2,10));
  ASSERT_EQUALS(12, largestValue(mix1,3));
  ASSERT_EQUALS(12, largestValue(mix2,3));
  ASSERT_EQUALS(5, largestValue(descending,5));
  ASSERT_EQUALS(5, largestValue(descending,1));


  ASSERT_EQUALS(3, smallestValue(fiveThrees,5));
  ASSERT_EQUALS(0, smallestValue(zeros,3));
  ASSERT_EQUALS(2, smallestValue(primes,5));
  ASSERT_EQUALS(2, smallestValue(primes,10));
  ASSERT_EQUALS(42, smallestValue(meaning,1));
  ASSERT_EQUALS(-42, smallestValue(mix1,10));
  ASSERT_EQUALS(-43, smallestValue(mix2,10));
  ASSERT_EQUALS(-42, smallestValue(mix1,3));
  ASSERT_EQUALS(-42, smallestValue(mix2,3));
  ASSERT_EQUALS(1, smallestValue(descending,5));
  ASSERT_EQUALS(5, smallestValue(descending,1));


  return 0;
}
