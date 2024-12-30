#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI 3.141592
#define LIMIT 100
#define MSG "passed"
#define ERR_PRINT printf("크기가 너무 큽니다 %d 보다 작은 값을 넣으세요\n",LIMIT)

int main02() {
	double radius, area;
	printf("반지름값을 입력하세요\n");
	scanf("%lf", &radius);
	area = radius * radius * PI;

	if (radius > LIMIT) ERR_PRINT;
	else printf("원의 면적은 %.2lf (%s)\n", area, MSG);

	return 0;
}