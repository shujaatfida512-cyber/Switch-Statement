#include <iostream>
using namespace std;

int majorcode;
string majorname, qoutastatus;

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
        majorname = "Information technology";
        qoutastatus = "Available (15 seats)";
        break;
    case 2:
        majorname = "Electrical engineering";
        qoutastatus = "Qouta Full!";
        break;
    case 3:
        majorname = "Information System";
        qoutastatus = "Available (5 seats)";
        break;
    default:
        majorname = "Unknown";
        qoutastatus = "Error: Invalid Major Code";
        break;
   }

}

void output()
{
   cout<< "\n=== Selection Result ===" << endl;
   cout<< "Major Name:" << majorname << endl;
   cout<< "Qouta Status: " << qoutastatus << endl;
   cout<< "----------------" << endl;
}
int main()
{
    input();
    selectmajor();
    output();
    
    return 0;
}
