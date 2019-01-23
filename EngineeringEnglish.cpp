#include <iostream>
#include <set>
#include <string>
#include <sstream>
#include <stdio.h>
#include <string.h>

using namespace std;

string toLower(string strr)
{
	char str[100];
	string ret;
	strcpy(str,strr.c_str());
	int differ = 'A'-'a';
	char ch;
	int ii = strlen(str);
	for (int i=0; i <ii;i++)
	{
		strncpy(&ch,str+i,1);
		if (ch>='A' && ch<='Z')
		{
			ch = ch-differ;
			memcpy(str+i,&ch,1);
		}
	}
	ret = str;
	return ret;
}

int main()
{
    set<string> setW;

    string line;

    while(getline(cin,line)){

        istringstream input(line);
        string word;
        while(input >> word){
            string lowercase = toLower(word);
            if(setW.find(lowercase) == setW.end()){
                setW.insert(lowercase);
                cout << word << " ";
            }
            else{
                cout << ". ";
            }
        }
        cout << endl;
    }


    return 0;
}
