#include <stdio.h>
#include "stackL261.h"
#include "testPair261.h"

int main(void) {
	char* express = (char*)"{(A+B)-3}*5+[{cos(x+y)+7}-1]*4";
	printf("%s", express);

	if (testPair(express) == 1)
		printf("\n\n ������ ��ȣ�� �°� ���Ǿ����ϴ�!");
	else
		printf("\n\n ������ ��ȣ�� Ʋ�Ƚ��ϴ�!");

	getchar(); return 0;
}