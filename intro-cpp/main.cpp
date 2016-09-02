#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

float f(float x){
    float result;
    result = atan(x);
    return result;
}

float derfana(float x){
    float result;
    result = 1/(1+pow(x, 2.0));
}

float derf2c(float x, float h){
    float result;
    result = (f(x+h) - f(x))/h;
    return result;
}

float derf3c(float x, float h){
    float result;
    result = (f(x+h) - f(x-h))/(2.0*h);
    return result
}

int main(){
    float hvector = new float[num]; // creates a dynamic vector
    h0 = 1.0;
    hN = 1e-18;
    c = pow(h0/hN, 1.0/num);        // iterative constant for h-size
    hvector[0] = h0;

    for (int i = 0; i<num; i++) {   // syntax for for-loops
        hvector[i+1] = h[i]/c;
    }
    cout << hvector << endl;
    delete hvector;

    return 0;
}
