#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{


    string line;
    while(getline(cin, line)){
       vector<string> names;
       vector<double> num;
       istringstream input(line);
       string word;
       int sizeofnum = 0;
       double sum = 0.0;

       while(input >> word){
            if(isalpha(word[0]) != 0){
                names.push_back(word);
            }
            else{
                double tmp = atof(word.c_str());
                sum+=tmp;
                sizeofnum++;
            }
       }

       double average = sum/sizeofnum;

       cout << fixed << setprecision(6) <<average << " ";

       for(int i = 0; i < names.size(); i++){
            cout << names[i] << " ";
       }
       cout << endl;
    }

    return 0;
}
