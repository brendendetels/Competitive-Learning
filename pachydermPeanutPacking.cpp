#include <iostream>
//Brenden Detels
using namespace std;

class Box{
public:
    double x1, y1, x2, y2;
    string box_size;

};

istream & operator>>(istream &is,Box &b){
    is >> b.x1 >> b.y1 >> b.x2 >> b.y2 >> b.box_size;
}

int main()
{
    //for each box

    int n;
    while(cin >> n) {
        if(n == 0){
            break;
        }
        Box b[n];
        //Enter in all the boxes
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int m;
        cin >> m;
        for (int i = 0; i < m; i++) {
            double x1, y1;
            string peanut_size;
            cin >> x1 >> y1 >> peanut_size;
            bool found = 0;

            for (int j = 0; j < n; j++) {
                if (b[j].x1 <= x1 && b[j].x2 >= x1 && b[j].y1 <= y1 && b[j].y2 >= y1) {
                    if(peanut_size == b[j].box_size) {
                        cout << b[j].box_size << " " <<"correct" << endl;
                        found = 1;
                    }
                    else{
                        cout << peanut_size <<" " << b[j].box_size << " "<< endl;
                        found = 1;
                    }
                    break;
                }

            }
            if(found == 0){
                cout << peanut_size << " floor" << endl;
            }

            //cout << x1 << y1 << peanut_size;

            //cout << endl;
        }
        cout << endl;
    }





    return 0;
}
