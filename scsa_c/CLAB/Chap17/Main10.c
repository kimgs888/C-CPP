#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ¿­°ÅÇü
enum season {SPRING=1, SUMMER=5, FALL, WINTER=10};
int main() {
	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER);

	//int a = 1;
	enum season s = SPRING ;
	switch (s)
	{
	case SPRING:
		printf("SPRING\n");
		break;
	case SUMMER:
		printf("SUMMER\n");
		break;
	case FALL:
		printf("FALL\n");
		break;
	case WINTER:
		printf("WINTER\n");
		break;

	default:
		break;
	}
	
	return 0;
}