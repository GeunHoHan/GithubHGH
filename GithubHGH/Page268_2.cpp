#include <stdio.h>
#include "stackL268.h"
#include "evalPostfix268.h"

int main(void) {
	int result;
	char* express = (char*)"35*62/-";
	printf("���� ǥ��� : %s", express);

	result = evalPostfix(express);
	printf("\n\n ���� ��� => %d\n", result);

	getchar(); return 0;
}