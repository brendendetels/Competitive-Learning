#include <iostream>

using namespace std;



int main()
{
    long x;
    while(cin >> x){
        //if number less than 0 then must be negative
        if(x < 0){
            cout << "-1 ";
            x*=-1;
        }


        int k;
        //for each multiple till x/2
        for(int i = 2; i <= x/i; i++){
            k = 0;
            //find smallest multiple
            while(x%i==0){
                k++;
                x/=i;
            }
            //if multiple of that number
            if(k!=0 && k != 1){
                printf("%d^%d ", i, k);
            }
            //if one of that number
            else if(k!= 0){
                cout << i << " ";
            }
        }
        if(x > 1){
            cout << x;
        }
        cout << endl;
    }
}
