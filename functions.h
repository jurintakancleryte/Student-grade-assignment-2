    #ifndef FUNCTIONS_H
    #define FUNCTIONS_H
     
    #include "Student.h"
    #include <vector>
    #include <list>
    #include <string>
     
    using namespace std;
     
    // Returns a random integer between min and max (inclusive)
    int getRandomInt(int min, int max);
     
    // Prompts the user to input student data manually from standard input
    void addStudentManually(vector<Student>& students);
     
    // Generates a specified count of random students in memory
    void generateRandomStudents(vector<Student>& students);
     
    // Displays loaded student results formatted in a console table (vector implementation)
    void displayStudentResults(vector<Student>& students);
     
    // Displays loaded student results formatted in a console table (list implementation)
    void displayStudentResultsList(list<Student>& students);
     
    // Allows the user to either select a preset file or enter a custom filename
    string selectOrEnterFile();
     
    // Reads student data from a text file into a vector of Student objects
    bool readStudentsFromFile(const string& filename, vector<Student>& students);
     
    // Reads student data from a text file into a list of Student objects
    bool readStudentsFromFileList(const string& filename, list<Student>& students);
     
    // Generates a dataset file containing student records with random grades
    void generateDatasetFile(const string& filename, int studentCount, int homeworkCount = 5);
     
    // Generates all five benchmark dataset files (1K, 10K, 100K, 1M, 10M records)
    void generateAllDatasets();
     
    // --- Strategy 1: Copy into two separate containers (grades < 5.0 and >= 5.0) ---
    void separateStudentsStrategy1(const vector<Student>& allStudents,
                                   vector<Student>& belowFive,
                                   vector<Student>& fiveOrAbove,
                                   bool useMedian = false);
     
    void separateStudentsListStrategy1(const list<Student>& allStudents,
                                       list<Student>& belowFive,
                                       list<Student>& fiveOrAbove,
                                       bool useMedian = false);
     
    // Existing wrappers for backwards compatibility
    void separateStudents(const vector<Student>& allStudents,
                          vector<Student>& belowFive,
                          vector<Student>& fiveOrAbove,
                          bool useMedian = false);
     
    void separateStudentsList(const list<Student>& allStudents,
                              list<Student>& belowFive,
                              list<Student>& fiveOrAbove,
                              bool useMedian = false);
     
    // --- Strategy 2: Move poor students (< 5.0) into one container and remove from original ---
    void separateStudentsStrategy2(vector<Student>& students,
                                   vector<Student>& belowFive,
                                   bool useMedian = false);
     
    void separateStudentsListStrategy2(list<Student>& students,
                                       list<Student>& belowFive,
                                       bool useMedian = false);
     
    // --- Strategy 3: Optimize separation using standard algorithms ---
    void separateStudentsStrategy3(vector<Student>& students,
                                   vector<Student>& belowFive,
                                   bool useMedian = false);
     
    void separateStudentsListStrategy3(list<Student>& students,
                                       list<Student>& belowFive,
                                       bool useMedian = false);
     
    // Writes a vector of students and their final grades to an output file
    bool writeStudentsToFile(const string& filename,
                             const vector<Student>& students,
                             bool useMedian = false);
     
    // Writes a list of students and their final grades to an output file
    bool writeStudentsToFileList(const string& filename,
                                 const list<Student>& students,
                                 bool useMedian = false);
     
    // Demonstrates memory addresses (&student) during manual entry for vector vs list
    void demonstrateMemoryAddresses();
     
    // Runs benchmark comparing all three strategies for a given dataset file
    void runBenchmarkForFile(const string& filename, bool useMedian = false, int repetitions = 5);
     
    // Runs benchmark comparing all three strategies across all dataset files
    void runAllBenchmarks();
     
    // Displays the main user menu choices
    void showMenu();
     
    #endif // FUNCTIONS_H