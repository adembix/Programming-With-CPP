#include <iostream>
#include <map>

using namespace std;


int main() {
    // Declare a map with string keys and int values
    map<string, int> studentGrades;

    // Inserting grades for three students
    studentGrades["Mike"] = 77;
    studentGrades["Jack"] = 85;
    studentGrades["Toms"] = 95;

    // Printing all map values
    cout << "\nPrinting all map values..\n\n";

    for (const auto& pair : studentGrades){
        cout << "Student [+] Name : " << pair.first << " | [+] Grade : " << pair.second << endl;
    }

    // Finding the grade for a specific student
    string studentName = "Jack";
    if (studentGrades.find(studentName) != studentGrades.end()){
        cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
    } else{
        cout << "Grade not found for " << studentName << endl;
    }

    return 0;
}
