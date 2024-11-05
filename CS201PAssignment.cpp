#include <iostream>
using namespace std;

int main() {
	cout<<"StudentID:BC240200119";
	cout<<"\nStudent Name: AliaMaryam Abbas"
    // Constants for grade thresholds
    const int GRADE_A_THRESHOLD = 90;
    const int GRADE_B_THRESHOLD = 80;
    const int GRADE_C_THRESHOLD = 70;
    const int GRADE_D_THRESHOLD = 60;
    const int NUM_SUBJECTS = 3;  // We will be inputting marks for three subjects

    int marks[NUM_SUBJECTS];  // Array to store marks
    int totalMarks = 0;
    int highestMarks = -1;   // Start with a very low number
    int lowestMarks = 101;   // Start with a very high number (assuming max mark is 100)

    int count = 0;

    // Use a while loop to input marks for each subject
    while (count < NUM_SUBJECTS) {
        cout << "Enter marks for subject " << (count + 1) << " (0-100): ";
        int mark;
        cin >> mark;

        // Validate the mark input
        if (mark < 0 || mark > 100) {
            cout << "Invalid input! Marks should be between 0 and 100." << endl;
            continue;
        }

        // Store the mark
        marks[count] = mark;
        totalMarks += mark;

        // Determine highest and lowest marks
        if (mark > highestMarks) {
            highestMarks = mark;
        }
        if (mark < lowestMarks) {
            lowestMarks = mark;
        }

        count++;
    }

    // Calculate the average marks
    double averageMarks = static_cast<double>(totalMarks) / NUM_SUBJECTS;

    // Determine the grade based on the average marks
    char grade;
    if (averageMarks >= GRADE_A_THRESHOLD) {
        grade = 'A';
    } else if (averageMarks >= GRADE_B_THRESHOLD) {
        grade = 'B';
    } else if (averageMarks >= GRADE_C_THRESHOLD) {
        grade = 'C';
    } else if (averageMarks >= GRADE_D_THRESHOLD) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Display the results
    cout << "\n--- Results ---" << endl;
    cout << "Marks: ";
    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        cout << marks[i] << " ";
    }
    cout << endl;

    cout << "Average Marks: " << averageMarks << endl;
    cout << "Grade: " << grade << endl;
    cout << "Highest Marks: " << highestMarks << endl;
    cout << "Lowest Marks: " << lowestMarks << endl;

    return 0;
}

