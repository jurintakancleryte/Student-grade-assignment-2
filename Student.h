#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Student
{
    string name;            // First name of the student
    string surname;         // Last name (surname) of the student
    vector<int> homework;   // List of homework assignment grades
    double exam;            // Final exam grade

    // Default constructor: initializes an empty Student object
    Student();

    // Parameterized constructor: creates a Student with specified values
    Student(const string& name, const string& surname,
            const vector<int>& homework, double exam);

    // --- Calculations ---
    // Calculates homework average (mean)
    double calculateHomeworkAverage() const;

    // Calculates homework median
    double calculateHomeworkMedian() const;

    // Calculates final grade:
    // Final = 0.4 * homework (average or median) + 0.6 * exam
    double calculateFinalGrade(bool useMedian = false) const;

    // --- Input Functionality ---
    // Reads student data (name, surname, homework grades, exam grade) from an input stream
    bool readFromStream(istream& is, int homeworkCount);
};

#endif