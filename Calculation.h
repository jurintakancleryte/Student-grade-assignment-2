#ifndef MEDIAN_H
#define MEDIAN_H

#include <vector>

using namespace std;

// Forward declaration of Student to avoid circular header dependencies
struct Student;

// Calculates the average (mean) of a vector of homework grades.
// Returns 0.0 if the vector is empty.
double calAverage(const vector<int>& homework);

// Calculates the median of a vector of homework grades.
// Returns 0.0 if the vector is empty.
double calMedian(vector<int> homework);

// Comparison function to sort students alphabetically.
// First compares by first name, then by last name (surname).
bool compareByName(const Student& a, const Student& b);

#endif // MEDIAN_H