#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    while(cin >> n){

        //if input is 0, then done
        if(n == 0){
            break;
        }

        vector<int> nums;
        //a vectir if each sequence
        vector<int> seq[n];


        //input data
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            nums.push_back(x);
        }

        //push back the first number
        seq[0].push_back(nums[0]);
        int maxseq = 1;
        //represents the seq ndx to print from
        int min = 0;

        for(int i = 1; i < n; i++){
            int currentmax = 1;
            int maxthroughj = i;
            //go through the current number to the beginning
            for(int j = i-1; j >= 0; j--){
                    //if prev number is less than
                if(nums[j] < nums[i] && seq[j].size()+1 > currentmax){
                        currentmax = seq[j].size() +1;
                        maxthroughj = j;
                }
            }

            seq[i] = seq[maxthroughj];
            //push back that number in the sequence
            seq[i].push_back(nums[i]);
            if(currentmax > maxseq){
                maxseq = currentmax;
                min = i;
            }
            else if(currentmax == maxseq){
                maxseq = currentmax;
                if(nums[min] > nums[i]){
                    min = i;
                }
            }
            else{
                //do nothing
            }
        }

        //outputting it
        cout << maxseq;
        for(int i = 0; i < seq[min].size(); i++){
            cout << ' ' << seq[min][i];
        }
        cout << endl;
    }
    return 0;
}
