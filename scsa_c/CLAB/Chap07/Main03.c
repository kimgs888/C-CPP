#include <stdio.h>
/* 
	recursive
*/
void recursive(int arr[3], int idx, int sum, int cross) {
	// basis part
	if (idx == 3) {
		printf("sum = %d, cross = %d\n", sum,cross);
		return;
	}
	
	// inductive part
	recursive(arr, idx + 1, sum + arr[idx], cross*arr[idx]);
}
void recursive2(int arr[3], int idx, int val) {
	// basis part
	if (idx == 3) {
		printf("val = %d\n", val);
		return;
	}

	// inductive part
	recursive2(arr, idx + 1, val + arr[idx]);
	recursive2(arr, idx + 1, val * arr[idx]);
}
void recursive3(int arr[3], int idx,int k, int sel[]) {
	// basis part
	if (k == 2) {
		for(int i =0; i<2;i++){
			printf("%d ", sel[i]);
		}
		printf("\n");
		return;
	}
	if (idx == 3) return;

	// inductive part
	// 선택하는 경우
	sel[k] = arr[idx];
	// 선택하지 안는 경우
	recursive3(arr, idx + 1, k+1, sel);
	recursive3(arr, idx + 1, k  , sel);
}

void recursive4(int arr[], int k, int sel[], int v[]) {
	if (k == 3) {
		for (int i = 0; i < 3;i++) {
			printf("%d ", sel[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i =0; i< 3;i++){
		if (v[i] == 0) {
			v[i] = 1;
			sel[k] = arr[i];
			recursive4(arr, k + 1, sel,v);
			v[i] = 0;
		}
	}
	/*if(v[0]==0){
		v[0] = 1;
		sel[k] = arr[0];
		recursive4(arr, k + 1, sel, v);
		v[0] = 0;
	}
	if (v[1] == 0) {
		v[1] = 1;
		sel[k] = arr[1];
		recursive4(arr, k + 1, sel, v);
		v[1] = 0;
	}
	if (v[2] == 0) {
		v[2] = 1;
		sel[k] = arr[2];
		recursive4(arr, k + 1, sel, v);
		v[2] = 0;
	}*/
}


int main() {
	int arr[3] = { 1,3,5 };
	int sel[3];
	int v[3] = { 0,0,0 };
	recursive4(arr, 0, sel, v);
	// recursive3(arr, 0, 0, sel);
	//recursive2(arr, 0, 1);
	//recursive(arr, 0,0,1);
	return 0;
}