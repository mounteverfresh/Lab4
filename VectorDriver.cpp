// Kyle Leadbetter
// 10-15-18
// Lab 04

#include "pch.h"
#include "VectorDriver.h"

int main() {
  /*cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);
  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  system("pause");*/

  vector<short>testVector(0); // initializes vector
  add_numbers(testVector); //fills vector and tests add_numbers
  cout << "test vector: ";
  print(testVector);

 /* add_numbers(testVector); // second call does the same as the first, exactly what it should? maybe you meant something else

  cout << endl << "test vector 2 : ";
  print(testVector);*/
  //cout << endl << "size: " << testVector.size(); // personal test so i dont have to count

  cout << endl << "test vector evens: "; //tests print_even function
  print_even(testVector);


  cout << endl << "test vector contains (2): " << is_present(testVector, 2); // tests a probable no
  cout << endl << "test vector contains (" << testVector[4] << "): " << is_present(testVector, testVector[4]); // tests a garunteed yes


  vectorSort(testVector); //tests and prints the vectorSort function
  cout << endl << "sorted test vector: ";
  print(testVector);


  cout << endl << endl;
  return 0;
}
