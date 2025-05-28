#include<iostream>
using namespace std;

class Area{
    private:
        int length, breadth, height;
        float radius;

    public:
        int result;

        Area(){  //Default Constructor
            length=0;
            breadth=0;
        }

        Area(int a){
            length=a;
            result=length*length;
            cout<<"Area of Square:"<<result<<endl;
        }

        Area(int c,int d){
            length=c;
            breadth=d;
            result=length*breadth;
            cout<<"Area of Rectangle:"<<result<<endl;
        }

        Area(float r){
            radius=r;
            result=2*3.142*radius;
            cout<<"Area of Circle:"<<result<<endl;
        }

        Area(int l, int b,int h){
            length=l;
            breadth=b;
            height=h;
            result=length*breadth*height;
            cout<<"Area of Cube:"<<result<<endl;
        }
};