#include "arrayFuncs.h"
#include "moreArrayFuncs.h"
#include "tddFuncs.h"

int main() {

  int fiveThrees[5]={3,3,3,3,3};
  int zeros[3]={0,0,0}; // initializes all elements to 0  
  int empty[] = {};
  int primes[] = {2,3,5,7,11,13,17,19,23,29};
  int meaning[] = {42};
  int mix1[10]={-42,12,-9,56,123,32767,48}; // last three will be zero
  int mix2[10]={-42,12,-9,56,123,32767,48,12,-43,-43};
  int descending[] = {5,4,3,2,1};

  ASSERT_EQUALS( "{3,3,3,3,3}", arrayToString(fiveThrees,5));
  ASSERT_EQUALS( "{0,0,0}", arrayToString(zeros,3));
  ASSERT_EQUALS( "{}", arrayToString(empty,0));
  ASSERT_EQUALS( "{2,3,5,7,11}", arrayToString(primes,5));
  ASSERT_EQUALS( "{2,3,5,7,11,13,17,19,23,29}", arrayToString(primes,10));
  ASSERT_EQUALS( "{42}", arrayToString(meaning,1));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,0,0,0}",arrayToString(mix1,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));

  copyElements(mix1,primes,7);

  ASSERT_EQUALS( "{2,3,5,7,11,13,17,19,23,29}", arrayToString(primes,10));
  ASSERT_EQUALS( "{2,3,5,7,11,13,17,0,0,0}",arrayToString(mix1,10));

  copyElements(mix1,mix2,3);

  ASSERT_EQUALS( "{-42,12,-9,7,11,13,17,0,0,0}",arrayToString(mix1,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));

  copyElements(mix1,mix2,10);

  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix1,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));


  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));
  
  int a[10] = {0};

  ASSERT_EQUALS(3,copyOddOnly(a,descending,5));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));
  ASSERT_EQUALS( "{5,3,1}",arrayToString(a,3));

  ASSERT_EQUALS(5,copyOddOnly(a,mix2,10));
  ASSERT_EQUALS( "{-42,12,-9,56,123,32767,48,12,-43,-43}",arrayToString(mix2,10));
  ASSERT_EQUALS( "{-9,123,32767,-43,-43}",arrayToString(a,5));

  ASSERT_EQUALS( "{3,3,3,3,3}", arrayToString(fiveThrees,5));
  ASSERT_EQUALS( "{0,0,0}", arrayToString(zeros,3));
  ASSERT_EQUALS( "{2,3,5,7,11}", arrayToString(primes,5));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));

  multiplyPairwise(fiveThrees,descending,a,5);

  ASSERT_EQUALS( "{3,3,3,3,3}", arrayToString(fiveThrees,5));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));
  ASSERT_EQUALS( "{15,12,9,6,3}", arrayToString(a,5));

  multiplyPairwise(primes,descending,a,4);

  ASSERT_EQUALS( "{2,3,5,7,11}", arrayToString(primes,5));
  ASSERT_EQUALS( "{5,4,3,2,1}",arrayToString(descending,5));
  ASSERT_EQUALS( "{10,12,15,14}",arrayToString(a,4));

  multiplyPairwise(primes,primes,a,7);

  ASSERT_EQUALS( "{2,3,5,7,11,13,17}", arrayToString(primes,7));
  ASSERT_EQUALS( "{4,9,25,49,121,169,289}",arrayToString(a,7));


  return 0;
}
