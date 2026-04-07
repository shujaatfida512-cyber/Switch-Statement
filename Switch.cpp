#include <iostream>
using namespace std;

int majorcode;
string MajorName, QuotaStatus;

void input()
{
    cout<< "=== campus major registration ===" << endl;
    cout<< "1. Information Technology"<< endl;
    cout<< "2. Information System"<<endl;
    cout<< "--------------------"<<endl;
    cout<< "Enter major code (1-3): ";
    cin>> majorcode;
}

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
