#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split (const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}

int main()
{
    string line;
    int i = 1;
    while(getline(cin, line)){

        if(line == "END"){
            break;
        }
        cout << i <<" ";
        bool noteven = false;
        //string[0] assumed to be *
        int lengthofwhite = 0;

        if(line.size() == 1){
            cout << "EVEN" << endl;
        }
        else{

            vector<string> result = split(line, '*');

            bool noteven = false;
            int stringsize = result[1].size();
            for(int i = 1; i < result.size(); i++){

                if(result[i].size() != stringsize){
                    noteven = true;
                    break;
                }
            }
            if(noteven == false){
                cout << "EVEN" << endl;
            }
            else{
                cout << "NOT EVEN" << endl;
            }

            /*int j = 1;
            bool foundblack = false;
            int whitesize = 0;
            while(!foundblack){
                if(line[j] == '*'){
                   foundblack = true;
                }
                else{
                    whitesize++;
                }
                j++;
            }
            */

            /*int start = whitesize+1;

            while(start!= line.size()){
                cout << start << endl;

                if(line[start] != '*'){
                    noteven=true;
                    break;
                }

                start++;
                int j =0;

                while(j != whitesize){
                    if(line[start+j]!='.'){
                        noteven = true;
                        break;
                    }
                    j++;
                }
                start += whitesize;

            }

            if(noteven == false){
                cout << "EVEN" << endl;
            }
            else{
                cout << "NOT EVEN" << endl;
            }*/


        }

        i++;

    }

    return 0;
}
