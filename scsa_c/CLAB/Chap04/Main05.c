#include <stdio.h>

int main() {
	int c = 0;		// 0000
	int flag = 1;	// 0001

	// bit 자리바꾸기
				
	c = c | (flag << 2);	//		0100
							// or	0000   
							//      0100	
	c = 5;		// 0101
	flag = 1 << 1;
	if ((c & flag)>0) {
		printf("1 << 1 자리수의 값이 1입니다");
	}
	else {
		printf("1 << 1 자리수의 값이 0입니다");
	}
	return 0;
}