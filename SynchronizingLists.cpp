#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{
    int n;
    while(cin >> n){

        if(n == 0){
            break;
        }
        vector<int> order;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            order.push_back(x);
        }

        vector<int> sorted2;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            sorted2.push_back(x);
        }

        vector<int> sorted1;
        sorted1 = order;
        sort(sorted1.begin(), sorted1.end());
        sort(sorted2.begin(), sorted2.end());

        for(int i = 0; i < n; i++){
            int find = order[i];
            for(int j = 0; j < n; j++){
                if(find == sorted1[j]){
                    //print.push_back(sorted2[j]);
                    cout << sorted2[j] << endl;
                }
            }
        }
        cout << endl;
        //printv(print);
    }
    return 0;
}
