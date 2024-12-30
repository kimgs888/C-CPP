#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "point2.h"
#include "point.h"



int main01() {
	Point p;
	p.r = 10;
	p.c = 20;
	p.cnt = 5;

	print(p);

	return 0;
}

void print(Point p) {
	printf("%d %d %d\n", p.r, p.c, p.cnt);
}