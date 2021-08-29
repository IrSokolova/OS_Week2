#include <stdio.h>
#include <limits.h>
#include <float.h>



int main() {
	int int_var = INT_MAX;
	float float_var = FLT_MAX;
	double double_var = DBL_MAX;
	
	printf ("%lu, %lu, %lu\n", sizeof(int_var), sizeof(float_var), sizeof(double_var));
	
	printf ("%d, %f, %f\n", int_var, float_var, double_var);
}
