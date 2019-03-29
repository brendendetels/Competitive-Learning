#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;

    int result;
    while(cin >> str){
        result = 0; // setting the base case too 0

        for(int i = 0; i < str.length(); i++){ // this for loop checks the size of the going from 0 to string size
            map<string, int> substrs;
            bool length;
            for(int j = 0; j < str.length(); j++){ // takes the substrings and puts them all into map
                if(i+j <= str.length()){
                    substrs[str.substr(j,i)]++;
                }
            }
            bool notresult = false;
            map<string, int>::iterator it = substrs.begin();
            while(it != substrs.end()){ //checks all the new items in map and finds largest size if there is one
                if(it->second <= 1){
                    notresult = true;
                }
                it++;
            }

            if(!notresult){
                result = i;
            }
        }


        cout << result << endl;
    }


    return 0;
}
