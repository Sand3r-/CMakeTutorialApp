#include "math.h"

float* inverse(float* x, int count) {
    #pragma parallel for
    for(int i = 0; i < count; i++)
        x[i] = 1.0f / x[i];
    return x;
}

float inverse(float x) {
    return 1.0f / x;
}