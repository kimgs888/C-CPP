#include <stdio.h>

int main() {
	char animal[3][20];

	int size = sizeof(animal) / sizeof(animal[0]);
	/*for (int i = 0;i < size;i++) {
		scanf("%s", animal[i]);
	}
	for (int i = 0;i < size;i++) {
		printf("%s\n", animal[i]);
	}*/

	char animal2[3][20] = { {'t','i','g','r','t'},{'c','a','t'},{'d','o','g'}};
	for (int i = 0;i < size;i++) {
		printf("%s\n", animal2[i]);
	}
	char animal3[3][20] = { "tiger","dog","cat"};
	for (int i = 0;i < size;i++) {
		printf("%s\n", animal2[i]);
	}

	return 0;
}