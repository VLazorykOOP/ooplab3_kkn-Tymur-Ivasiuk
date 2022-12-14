#include <iostream>

using namespace std;

class Retangle {

public:
    int a, b;
    string color;
    
    Retangle() {
        a = 1;
        b = 1;
        color = "black";
    }
    
    Retangle(int value1, int value2, string value3) {
        if(value1 > 0 && value2 > 0) {
            a = value1;
            b = value2;
        } else {
            throw -1;
        }
        
        if(value3.length()>0){
            color = value3;
        } else {
            throw "";
        }
    }
    
    void setA (int value) {
        if(value > 0) {
            a = value;
        } else {
            throw -1;
        }
    }
    void setB (int value) {
        if(value > 0) {
            b = value;
        } else {
            throw -1;
        }
    }
    void setColor (string value) {
        if(value.length()>0){
            color = value;
        } else {
            throw "";
        }
    }
    
    
    int getPerimetr() {
        return (a+b)*2;
    }
    int getSquare() {
        return a*b;
    }
    
    int getInfoA() {
        return a;
    }
    int getInfoB() {
        return b;
    }
    string getInfoColor() {
        return color;
    }
    
    void printInfo() {
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++) {
                cout << "#";
            }
            cout << endl;
        }
        cout << "Color: " << color;
    }
    
};

int main()
{
    Retangle r(4, 5, "red");
    cout << r.getPerimetr() << endl;
    cout << r.getSquare() << endl;
    cout << r.getInfoA() << endl;
    cout << r.getInfoB() << endl;
    cout << r.getInfoColor() << endl;
    
    r.setColor("blue");
    cout << r.getInfoColor() << endl;
    r.printInfo();
    
}
