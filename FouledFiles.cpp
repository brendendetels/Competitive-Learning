#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string tmp;
    getline(cin, tmp);
    for(int i = 0; i < n; i++){
        string line;
        getline(cin, line);
        int j = 0;
        int count = 0;
        string comp = line;
        while( comp[j] != '\n' && comp[j] != '\0'){
            //cout << comp;
            
            //cout << line << endl;
            cout << comp[j];
            count++;
            j+=2;
            if(count >= 40){
                break;
            }
        }
        cout << endl;
    }
    return 0;
}
