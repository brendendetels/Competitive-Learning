#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;


unsigned GCD(unsigned u, unsigned v) {
    while ( v != 0) {
        unsigned r = u % v;
        u = v;
        v = r;
    }
    return u;
}
int main()
{
    //LCM = abs(a*b)/GCD(a,b)
    string line;
    while(getline(cin, line)){
        istringstream in(line);
        long long x;

        long long lcm;
        int i = 0;
        while(in >> x){
            if(i == 0){
                lcm = x;
            }
            else if(i == 500){
                break;
            }
            else{
                long long gcd = GCD(lcm, x);
                long long mult = lcm * x;
                long long abso = abs(mult);
                lcm = abso/gcd;
            }
            i++;
        }
         cout << lcm << endl;

    }
}
