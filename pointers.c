#include<stdio.h>

int main() {
	printf("Pointers");
	int pizzaSlices[5] = { 8, 6, 10, 12, 4 };
	printf("size of pizzaSlices is %d\n", sizeof(pizzaSlices));
	printf("size of int is %d\n", sizeof(int));
	printf("size of pizzaSlices is % d\n", sizeof(pizzaSlices)/sizeof(int));
	for (int i=0; i<sizeof(pizzaSlices)/sizeof(int); i++) {
		printf("value pizzaSlices sub %d is %d\n", i, pizzaSlices[i]);
		printf("location of pizzaSlices sub %d is %d\n", i, (int) &pizzaSlices[i]);
	}

	int* pizzaSlicesPtr = (int*)malloc(5 * sizeof(int));

	/*from what I can find, you cannot get the size of the array from a pointer*/
	printf("\n\nsize of pizzaSlicesPtr is %d\n", sizeof(pizzaSlicesPtr)/sizeof(int));
	printf("location of pizzaSlicesPtr is %d\n", (int) pizzaSlicesPtr);

	int i = 0;
	*(pizzaSlicesPtr + i) = 8;
	i++;
	*(pizzaSlicesPtr + i) = 6;
	i++;
	*(pizzaSlicesPtr + i) = 10;
	i++;
	*(pizzaSlicesPtr + i) = 12;
	i++;
	*(pizzaSlicesPtr + i) = 4;
	/*from what I can find, you cannot get the size of the array from a pointer*/
	for (int i = 0; i<5; i++) {
		printf("value of pizzaSlicesPtr sub %d is %d\n", i, *(pizzaSlicesPtr+i));
		printf("location of pizzaSlicesPtr %d is %d\n", i, (int) (pizzaSlicesPtr + i));
	}
	free(pizzaSlicesPtr);
	return 0;
}