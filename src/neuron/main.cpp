#include <spdlog/spdlog.h>
#include "math_funcs.h"

int main() {
	spdlog::info("Hello world");
	float value = 2.0f;
	float result = inverse(value);
	float* values = new float[20];
	values = inverse(values, 20);
	delete values;
	return 0;
}
 