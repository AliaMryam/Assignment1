#include <iostream>
#include <limits>

using namespace std;

// Constants for grade boundaries
const int TOTAL_SUBJECTS = 3;
const int MAX_MARKS = 100;

// Function to calculate grade based on average marks
char calculateGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

int main() {
    // Hard-coded student ID and name
    const string studentID = "Bc240200119";
    const string studentName = "Alia Mariam Abbas";

    cout << "Bc240200119: " << studentID << endl;
    cout << "Alia Mariam Abbas: " << studentName << endl;

    // Variables to store marks
    int marks[TOTAL_SUBJECTS];
    int totalMarks = 0, highestMarks = 0, lowestMarks = MAX_MARKS;
    float averageMarks;

    // While loop to input marks for each subject
    for (int i = 0; i < TOTAL_SUBJECTS; ++i) {
        while (true) {
            cout << "Enter marks for subject " << i + 1 << " (out of 100): ";
            cin >> marks[i];
            
            // Validate input
            if (cin.fail() || marks[i] < 0 || marks[i] > MAX_MARKS) {
                cout << "Invalid input. Please enter a number between 0 and 100.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            } else {
                totalMarks += marks[i];
                if (marks[i] > highestMarks) highestMarks = marks[i];
                if (marks[i] < lowestMarks) lowestMarks = marks[i];
                break;
            }
        }
    }

    // Calculate average marks
    averageMarks = static_cast<float>(totalMarks) / TOTAL_SUBJECTS;
    char grade = calculateGrade(averageMarks);

    // Display results
    cout << "\nObtained Marks for Each Subject:\n";
    for (int i = 0; i < TOTAL_SUBJECTS; ++i) {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }

    cout << "\nCalculated Results:\n";
    cout << "Total Marks: " << totalMarks << endl;
    cout << "Average Marks: " << averageMarks << endl;
    cout << "Grade: " << grade << endl;
    cout << "Highest Marks: " << highestMarks << endl;
    cout << "Lowest Marks: " << lowestMarks << endl;

    return 0;
}

