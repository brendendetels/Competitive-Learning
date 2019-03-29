#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

const double PI = 3.141592653589793;

class circle{
private:

    double X, Y, V;
    string color;

public:

    circle(){
        X = Y = V = 0;
        color = "";
    }

    circle(double x, double y, double v, string color){
        this->X = x;
        this->Y = y;
        this->V = v;
        this->color = color;
    }

    double getX(){
        return X;
    }
    double getY(){
        return Y;
    }
    double getV(){
        return V;
    }

    string getColor(){
        return color;
    }

    void setX(double n){
        this->X = n;
    }
    void setY(double n){
        this->Y = n;
    }
    void setV(double n){
        this->V = n;
    }
    void setColor(string color){
        this->color = color;
    }

    void printcircle(){
        cout << X << " - " << Y << " - " << V << ": " << color << endl;
    }

    double calculateDistance( double x, double y){
        //cout << "X: " << X << " - " << "Y: " << Y << endl;
        return sqrt( pow(x - X, 2) + pow(y - Y, 2) );
    }

    double checkRange(double distance){
        return (distance < (sqrt(V/PI)));
    }

};




int main()
{

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        vector<circle> circles;
        int m;
        cin >> m;
        //for each circle entry to m
        for(int j = 0; j < m; j++){
            circle tmp;
            double x, y, v;
            string color;
            cin >> x >> y >> v >> color;
            tmp.setX(x);
            tmp.setY(y);
            tmp.setV(v);
            tmp.setColor(color);
            circles.push_back(tmp);
        }

        int f;
        cin >> f;
        for(int j = 0; j < f; j++){
            double x, y;
            cin >> x >> y;
            //color starts closest to white
            string closestcolor = "white";
            for(int k = 0; k < circles.size(); k++){
                double distance = circles[k].calculateDistance( x, y);
                //if in range of that circle, take its color
                if(circles[k].checkRange(distance)){
                    closestcolor = circles[k].getColor();
                }
            }
            cout << closestcolor << endl;

        }


    }

    return 0;
}
