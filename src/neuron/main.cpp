#include "math_funcs.h"

int main() {
	float value = 2.0f;
	float result = inverse(value);
	float* values = new float[20];
	values = inverse(values, 20);
	delete values;
	return 0;
}
 