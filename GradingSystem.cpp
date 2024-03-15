#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int numberStudents;
    cout << "Tell me How many Courses Number you want to Input: ";
    cin >> numberStudents;
    int marks[numberStudents];
    string grades[numberStudents];
    double gradesPoints[numberStudents];
    cout << "Tell me The numbers of Marks of Courses." << endl;
    for(int i = 0; i < numberStudents; i++)
    {
        while(true)
        {
            cout << "Course " << i+1 << " :" <<endl;
            cin >> marks[i];
            if(marks[i] >=0 && marks[i] <= 100)
            {
                break;
            } else
            {
                cout << "Marks can't be more than 100. Give mark Again"<< endl;
                marks[i];
            }
        }
        if(marks[i] >= 90)
        {
            grades[i] = "A+";
            gradesPoints[i] = 4.00;
        }
        else if(marks[i] >=85 || marks[i] <= 89)
        {
            grades[i] = "A";
            gradesPoints[i] = 3.75;
        }
        else if(marks[i] >=80 || marks[i] <=85)
        {
            grades[i] = "B+";
            gradesPoints[i] = 3.50;
        }
        else if(marks[i] >=75 || marks[i] <= 80)
        {
            grades[i] = "B";
            gradesPoints[i] = 3.25;
        }
        else if(marks[i] >=70 || marks[i] <= 75)
        {
            grades[i] = "C+";
            gradesPoints[i] = 3.00;
        }
        else if(marks[i] >= 65 || marks[i] <= 70)
        {
            grades[i] = "C";
            gradesPoints[i] = 2.75;
        }
        else if(marks[i] >= 60 || marks[i] <= 65)
        {
            grades[i] = "D+";
            gradesPoints[i] = 2.50;
        }
        else if(marks[i] >= 50 || marks[i] <= 60)
        {
            grades[i] = "D";
            gradesPoints[i] = 2.25;
        }
        else
        {
            grades[i] = "F";
            gradesPoints[i] = 0.00;
        }
    }
    cout << left << setw(10) << "Courses" << setw(10) << "Grades" << setw(10) << "Grades Points"<< endl;
    for(int i =0; i< numberStudents; i++)
    {
        cout << left << setw(10) << i+1 << setw(10) << grades[i];
        cout << setw(13) << fixed << setprecision(2) << right << gradesPoints[i] << endl;
    }
    return 0;
}
