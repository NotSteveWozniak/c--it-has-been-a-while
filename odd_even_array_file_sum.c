/* Enter upto 10 nuberw with a zpace between each.  The sum of the even and odd array elements will be calculated*/

#include<stdio.h>

int main() {
	int sumEven = 0, sumOdd = 0;
	int numbersArray[10]; //must use hardcode array size
	//int numbersArray = (int*)malloc(sizeof(int) * 10); //must use hardcode array size

	printf("Enter upto 10 numbers.  The nubers will be summed by odd/even, depending on the order it was enterend\n");
	
	for (int i=0; i<10; i++){
		scanf_s(" %d", &numbersArray[i], 10); //scan_s is required by the Microsoft compiler
		//check for NULL
		if (numbersArray[i] % 2 == 0) {
			printf("even\n");
			sumEven += numbersArray[i];
		}
		else {
			printf("odd\n");
			sumOdd += numbersArray[i];
		}

	}
	
	printf("sumEven = %d \n", sumEven);
	printf("sumOdd = %d \n", sumOdd);

	return 0;
}