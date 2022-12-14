#include <iostream>

using namespace std;

class KompChislo {

public:
    float re, im;
    bool stan;
    
    KompChislo() {
        re = 0;
        im = 0;
        stan = false;
    }
    KompChislo(float value) {
        re = value;
        im = value;
        stan = true;
    }
    KompChislo(float *value) {
        if (value != NULL) {
            re = value[0];
            im = value[1];
            stan = true;
        }
    }
    
    void setValue(float value = 1) {
        re = value;
        im = value;
    }
    float getValue() {
        return re;
    }
    
    
    void printInfo() {
        cout << "re = " << re << ", im = " << im << endl;
    }
    float sum_value() {
        return re+im;
    }
    float minus_value() {
        return re-im;
    }
    float dot_value(){
        return re*im;
    }
    float division_value() {
        return re/im;
    }
    
    
    ~KompChislo() {
        cout << "Delete/ stan = " << stan << endl;
    }
};

int main()
{
    float H[2] = {7, 8};
    
    KompChislo ch(H);
    cout << ch.re << endl;
    ch.setValue(5);
    cout << ch.re << endl;
}
