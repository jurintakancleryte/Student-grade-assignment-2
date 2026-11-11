    #include "Calculation.h"
    #include "Student.h"
    #include <algorithm>
     
    using namespace std;
     
    // Calculate the average (mean) score of homework assignments
    double calAverage(const vector<int>& homework)
    {
        if (homework.empty())
        {
            return 0.0; // Prevent division by zero
        }
     
        double sum = 0.0;
        for (int mark : homework)
        {
            sum += mark;
        }
        return sum / homework.size();
    }
     
    // Calculate the median score of homework assignments
    double calMedian(vector<int> homework)
    {
        if (homework.empty())
        {
            return 0.0;
        }
     
        // Sort vector to find median position
        sort(homework.begin(), homework.end());
        size_t n = homework.size();
     
        // If even number of elements, average middle two numbers
        if (n % 2 == 0)
        {
            return (homework[(n / 2) - 1] + homework[n / 2]) / 2.0;
        }
        else
        {
            return homework[n / 2];
        }
    }
     
    // Compare two students alphabetically by name, then surname
    bool compareByName(const Student& a, const Student& b)
    {
        if (a.name == b.name)
        {
            return a.surname < b.surname;
        }
        return a.name < b.name;
    }