#include<iostream>
using namespace std;

 class Area{
    private:
     int length,breadth;

    public:
    int result;
      Area(){
        length=0;
        breadth=0;

      }
      Area(int a,int b){
        length=a;
        breadth=b;

      }
      void calculateArea(){
        result=length*breadth;
        cout<<" area of rectangle with length :"<<length<<" and breadth:"<<breadth
        <<" is equal to "<<result<<endl;

      }
 };

 int main(){
    int len,wid;
    Area rect1; //Object 1 Created
    rect1.calculateArea();

    cout<<" enter the length and breadth for finding the area of rectangle:";
    cin>>len>>wid;
    
    Area rect2(len,wid); //Object 2 Created
    rect2.calculateArea();
    
 }