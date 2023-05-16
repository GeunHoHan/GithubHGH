#include <stdio.h>
#include "stackL268.h"
#include "evalPostfix268.h"

int main(void) {
	int result;
	char* express = (char*)"35*62/-";
	printf("후위 표기식 : %s", express);

	result = evalPostfix(express);
	printf("\n\n 연산 결과 => %d\n", result);

	getchar(); return 0;
}