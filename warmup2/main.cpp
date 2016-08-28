#include<math.h>
#include<stdio.h>

int f(float x)
{
    float result;
    result = arctan(x);
    return result;
}

int derfana(float x)
{
    float result;
    result = 1/(1+pow(x, 2.0))
}


int derf2c(float x, float h)
{
    float result;
    result = (f(x+h) - f(x))/h;
    return result;
}

int derf3c(float x, float h)
{
    float result;
    result (f(x+h) - f(x-h))/(2.0*h);
    return result
}




int main()
{
    float x, h;

    return 0;
}

