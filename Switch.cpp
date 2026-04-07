// Start of program
#include <iostream>
using namespace std;

//Global Variables
int majorcode;
string MajorName, QuotaStatus;

//Function to take input from user
void input()
{
    cout<< "=== campus major registration ===" << endl;
    cout<< "1. Information Technology"<< endl;
    cout<< "2. Information System"<<endl;
    cout<< "--------------------"<<endl;
    cout<< "Enter major code (1-3): ";
    cin>> majorcode;
}

// Function to select major based on input
void selectmajor()
{
   switch (majorcode)
   {
    case 1:
        MajorName = "Information technology";
        QuotaStatus = "Available (15 seats)";
        break;
    case 2:
        MajorName = "Electrical engineering";
        QuotaStatus = "Qouta Full!";
        break;
    case 3:
        MajorName = "Information System";
        QuotaStatus = "Available (5 seats)";
        break;
    default:
        MajorName = "Unknown";
        QuotaStatus = "Error: Invalid Major Code";
        break;
   }

}

// Function to display result
void output()
{
   cout<< "\n=== Selection Result ===" << endl;
   cout<< "Major Name:" << MajorName << endl;
   cout<< "Qouta Status: " << QuotaStatus << endl;
   cout<< "----------------" << endl;
}
int main()
{
    input();
    selectmajor();
    output();
    
    return 0;
}
// end program
