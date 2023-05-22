#include <iostream>
#include <string>
using namespace std;

std::string months[] = {"January", 
                    "February", 
                    "March", 
                    "April", 
                    "May", 
                    "June", 
                    "July", 
                    "August", 
                    "September", 
                    "October", 
                    "Novmeber",
                    "December" };

int monthDays[] ={31,28,31,30,31,30,31,31,30,31,30,31};

void printMonthTitle(){
    cout << "Su\tM\tT\tW\tTH\tF\tS" << endl;
}

void printMonths(){
    for(int i = 0; i < 12; i++){
        cout << "\t\t\t" << months[i] << endl;
        printMonthTitle();
        for(int j = 1; j <= monthDays[i]; j++){
            if((j % 7)  == 0){
                cout << j << endl;
                continue;
            }
            else{
                cout << j << "\t";
                continue;
            }
        }
        cout << endl;
    }
}

int main(){
    printMonths();
    return 0;
}   