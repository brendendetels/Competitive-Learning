#include <iostream>
#include <math.h>
using namespace std;

//Represents a Corner
struct Corners{
    double x, y;
};

//Point where mouse click
//struct?
class Click{
    private:
        double x1, y1;
    public:
        Click(double x1, double y1){
            this->x1 = x1;
            this->y1 = y1;
        }
        double getX1(){
            return x1;
        }
        double getY1(){
            return y1;
        }
};

class RoundRectangle{
    private:
        //represent rectangle
        double x, y, w, h, r;
        //represent 4 corners
        Corners rectCorners[4];
    public:
        RoundRectangle(double x, double y, double w, double h, double r, int m){
            this->x = x;
            this->y = y;
            this->w = w;
            this->h = h;
            this->r = r;
            //set corners of rectangle
            rectCorners[0] = {x+r, y+r}; //starts top left
            rectCorners[1] = {x+r, y+h-r}; //top right
            rectCorners[2] = {x+w-r, y+r}; //bottom left
            rectCorners[3] = {x+w-r, y+h-r}; //bottom right

            //check each click
            for(int i = 0; i < m; i++){
                double x1, y1;
                cin >> x1 >> y1;
                Click p = Click(x1, y1);
                checkClickInside(p);
            }

        }

        void checkClickInside(Click p){
            //check if M is inside Rectangle
            bool inside = false;
            if(checkInRectangle(p)){
                cout << "inside" << endl;
            }
            else if(checkInCircle(p)){
                cout << "inside" << endl;
            }
            else{
                cout << "outside" << endl;
            }
        }

        // check if inside bounds of Rectangle
        bool checkInRectangle(Click p){
            if(((p.getX1() <= x+w-r) && (p.getX1() >= x+r) && (p.getY1() <= y+h) && (p.getY1() >= y)) ||
               ((p.getX1() <= x+w) && (p.getX1() >= x) && (p.getY1() <= y+h-r) && (p.getY1() >= y+r))){
                return true;
            }
            return false;
        }


        bool checkInCircle(Click p){
            //for each circle in Corner
            for(int i = 0; i < 4; i++){
                //check if distance of point is inside the radius
                if(findSqrtDist(p, rectCorners[i]) <= r*r){
                    return true;
                }
            }
            return false;
        }

        double findSqrtDist(Click p, Corners corner){
            return pow(p.getX1()-corner.x ,2) + pow(p.getY1()-corner.y,2);
        }
/*
        //for my purposes
        void printRec(){
            cout << "(x,y): (" << x <<", " <<y << ") (w,h,r): (" << w << ", "<<h << ", "<< r << ")"<< endl;
            for(int i = 0; i < 4; i++){
                cout << "Corner{" << rectCorners[i].x << ", " << rectCorners[i].y << ")" << endl;
            }
        }*/
};


int main()
{
    //for inputs
    int n, m;
    // define rounded rectangle
    double x,y,w,h,r;

    //input number of rectangles
    cin >> n;

    //for each rectangle
    for(int i = 0; i < n; i++){
        //set Rectangle input
        cin >> x >> y >> w >> h >> r >> m;
        RoundRectangle rec = RoundRectangle(x, y, w, h, r, m);
        cout << endl;
    }
    return 0;
}
