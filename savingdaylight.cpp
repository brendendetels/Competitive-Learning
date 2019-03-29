#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <queue>
using namespace std;


class Day{
public:
    string month, day, year;
    int mt1, mt2, nt1, nt2;
    int hours, minutes;

    Day(string month1, string day1, string year1, int mt11, int mt21, int nt11, int nt21){
        month = month1;
        day = day1;
        year = year1;
        mt1 = mt11;
        mt2 = mt21;
        nt1 = nt11;
        nt2 = nt21;
        hours = 0;
        minutes = 0;
    }

    void calculate(){
        hours = nt1 - mt1;
        minutes = nt2 - mt2;

        if(minutes < 0){
            minutes = 60 + minutes;
            hours--;
        }
    }
    void print(){
         cout << month << " " << day << " " << year << " " << hours << " hours " << minutes << " minutes" << endl;
    }


};
int main()
{
    string line;

        string month, day, year;
        char trash;
        int mt1, mt2, nt1, nt2;
    while(cin >> month >> day >> year >> mt1 >>trash >> mt2 >> nt1 >> trash >>nt2){


        Day x(month, day , year, mt1, mt2, nt1, nt2);
        x.calculate();
        x.print();
    }


    return 0;
}
