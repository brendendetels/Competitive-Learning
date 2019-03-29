#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkIfArithmetic(vector<int>& vec ){
    auto beg = vec.begin();
    auto iterator1 = vec.begin()+1;
    auto iterator2 = vec.begin()+1;
    int diff = *iterator1 - *beg;
    iterator1++;
    while(iterator1 != vec.end()){
        if(*iterator1 - *iterator2 != diff){
            return false;
        }
        iterator1++;
        iterator2++;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    while(n > 0){
        vector<int> list;
        int m;
        cin >> m;

        //put all that lists numbers in vector
        for(int i = 0; i < m; i++){
            int num;
            cin >> num;
            list.push_back(num);
        }

        //check if Arithmetic
        if(checkIfArithmetic(list)){
            cout << "arithmetic" << endl;
        }
        else{

            //sort and see if arithmetic
            sort(list.begin(), list.end());
            // if now arithmetic, then permuted arithmetic
            if(checkIfArithmetic(list)){
                cout << "permuted arithmetic" << endl;
            }
            else{
                cout << "non-arithmetic" << endl;
            }
        }
        n--;
    }
    return 0;
}
