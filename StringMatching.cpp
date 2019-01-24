#include <iostream>
using namespace std;

//https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/
void computeLPS(string pattern, int *Lps){
	int length = 0;
	int i = 1;
	Lps[0] = 0;
	while(i < pattern.size()){
		if(pattern[i] == pattern[length]){
			Lps[i++] = ++length;
		}
		else{
			if(length != 0){
				length = Lps[length-1];
			}
			else{
				Lps[i] = 0;
				i++;
			}
		}
	}
}

void KMP(string pattern, string text){
	int m = pattern.size();
	int n = text.size();
	int Lps[m];
	int i = 0, j = 0;
	
	computeLPS(pattern, Lps);
	
	while (i < n){
      if (pattern[j] == text[i]) {
		  i++;
		  j++;
	  }
      if (j == m){
        cout << i-j << " ";
        j = Lps[j-1];
      } 
      else if (i < n && pattern[j] != text[i]){
        if (j != 0) {
			j = Lps[j-1];
		}
        else {
			i++;
		}
      }
    }
cout << endl;
}


int main(){
	string pattern, text;
	while(getline(cin, pattern) && getline(cin,text)){
		KMP(pattern,text);
	}
	return 0;
}