

#include <iostream>
using namespace std;

int main() {
    float gpa;
    int choice;

    // Display the scholarship menu
    cout << "Welcome to the Scholarship Menu" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Option Scholarship Type Eligibility" << endl;
    cout << "------------------------------------------" << endl;
    cout << "1 Performance Scholarship (GPA >= 3.5)" << endl;
    cout << "2 Amal Scholarship (GPA >= 3.1 and < 3.5)" << endl;
    cout << "3 Mumtaz Scholarship (GPA >= 3.3 and < 3.5)" << endl;
    cout << "4 No Scholarship" << endl;
    cout << "------------------------------------------" << endl;
    cout<<"Enter your choice (1-4):"<<" "<<endl;
    cin>>choice;
    cout << "Enter your GPA: ";
    cin >> gpa;
    if (gpa >= 3.5) {
        choice = 1; 
    } else if (gpa >= 3.3) {
        choice = 3; 
    } else if (gpa >= 3.1) {
        choice = 2;
    } else {
        choice = 4; 
    }

    
    switch (choice) 
	{
        case 1:
            cout << " Performance Scholarship " << endl;
            break;
        case 2:
            cout << " Amal Scholarship " << endl;
            break;
        case 3:
            cout << " Mumtaz Scholarship" << endl;
            break;
        case 4:
            cout << "Unfortunately, you are not eligible for a scholarship." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}
