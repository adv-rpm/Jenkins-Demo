#ifndef CALCULATOR_H
#define CALCULATOR_H

#ifdef __cplusplus
extern "C" {
#endif


	int add(int a, int b);
	int sub(int a, int b);
	int multiply(int a, int b);

	int limit_value(int value);

#ifdef __cplusplus
}
#endif

#endif