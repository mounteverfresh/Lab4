/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Kyle Leadbetter
 * Date: October 15, 2018 (the future)
 * Lab04
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// Adds 10 random numbers to the entered vector
void add_numbers(vector<short> &data)
{
	for (int i = 0; i < 10; i++)
	{
		std::random_device rd;     // only used once to initialise (seed) engine
		std::mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
		// I found this random number generator online and modified it slightly to work in the compiler, https://stackoverflow.com/questions/5008804/generating-random-integer-from-a-range, it seems to work well

		data.push_back(rng());
	}
}


// exact copy of the print function with the for loop modified to print out only the even numbers
void print_even(const vector<short> &data) {
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 2; i < data.size(); i+=2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

// again essentially a carbon copy of the sum function that checks for the value that we're searching for, and will reurn true/false depending on whether the number is present or not
bool is_present(const vector<short> &data, short value)
{
	std::vector<short>::const_iterator iter = data.begin();
	bool found = false;
	while (iter != data.end())
	{
		if (*iter == value)
		{
			found = true;
		}
		iter++;
	}
	return found;
}


//
void vectorSort(vector<short> &data)
{
	std::vector<short>::iterator iter = data.begin();

	sort(iter, iter+data.size());
}
