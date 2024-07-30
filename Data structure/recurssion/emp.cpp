#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

// Define a structure for punch records
struct PunchRecord {
    string employeeID;
    string type; // "IN" or "OUT"
    string timestamp;
};

// Utility function to get the current time as a string
string getCurrentTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    char buffer[80];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", ltm);
    return string(buffer);
}

// Function to log a punch record to the file
void logPunchRecord(const PunchRecord& record) {
    ofstream file("punch_report.txt", ios::app);
    if (file.is_open()) {
        file << record.employeeID << "," << record.type << "," << record.timestamp << endl;
        file.close();
    } else {
        cout << "Unable to open file for writing" << endl;
    }
}

// Function to display the punch report
void displayReport() {
    ifstream file("punch_report.txt");
    string line;
    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file for reading" << endl;
    }
}

int main() {
    int choice;
    string employeeID;

    while (true) {
        cout << "1. Punch In" << endl;
        cout << "2. Punch Out" << endl;
        cout << "3. Display Report" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) {
            cout << "Enter Employee ID: ";
            cin >> employeeID;
            
            PunchRecord record;
            record.employeeID = employeeID;
            record.type = (choice == 1) ? "IN" : "OUT";
            record.timestamp = getCurrentTime();
            
            logPunchRecord(record);
            cout << (choice == 1 ? "Punch In" : "Punch Out") << " recorded for employee: " << employeeID << endl;
        } else if (choice == 3) {
            displayReport();
        } else if (choice == 4) {
            return 0;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}