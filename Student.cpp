#include "Student.h"
#include "Calculation.h"
#include <iostream>
#include <utility>

using namespace std;

// Default constructor
Student::Student()
    : name(""), surname(""), homework(), exam(0.0)
{
}

// Parameterized constructor
Student::Student(const string& name, const string& surname,
                 const vector<int>& homework, double exam)
    : name(name), surname(surname), homework(homework), exam(exam)
{
}

// Calculate homework average score using helper function
double Student::calculateHomeworkAverage() const
{
    return calAverage(homework);
}

// Calculate homework median score using helper function
double Student::calculateHomeworkMedian() const
{
    return calMedian(homework);
}

// Calculate final grade based on average or median formula:
// Final = 0.4 * homework + 0.6 * exam
double Student::calculateFinalGrade(bool useMedian) const
{
    double homeworkScore = useMedian ? calculateHomeworkMedian() : calculateHomeworkAverage();
    return 0.4 * homeworkScore + 0.6 * exam;
}

// Read student data from an input stream (file or cin)
bool Student::readFromStream(istream& is, int homeworkCount)
{
    string tempName, tempSurname;
    if (!(is >> tempName >> tempSurname))
    {
        return false; // End of file or reading failure
    }

    vector<int> tempHomework;
    tempHomework.reserve(homeworkCount);

    for (int i = 0; i < homeworkCount; i++)
    {
        int grade;
        if (!(is >> grade))
        {
            return false;
        }

        // Validate homework grade range (1-10)
        if (grade < 1 || grade > 10)
        {
            cerr << "Error: Invalid homework grade (" << grade << ") for "
                 << tempName << " " << tempSurname << ".\n";
            return false;
        }

        tempHomework.push_back(grade);
    }

    double tempExam;
    if (!(is >> tempExam))
    {
        return false;
    }

    // Validate exam grade range (1-10)
    if (tempExam < 1.0 || tempExam > 10.0)
    {
        cerr << "Error: Invalid exam grade (" << tempExam << ") for "
             << tempName << " " << tempSurname << ".\n";
        return false;
    }

    // Assign validated values directly to public member variables
    name = tempName;
    surname = tempSurname;
    homework = std::move(tempHomework);
    exam = tempExam;

    return true;
}