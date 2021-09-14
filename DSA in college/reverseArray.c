#include <stdio.h>
#include <stdlib.h>

int* memoryAllocation();
void inputArray(int arr[]);
void printArray(int arr[]);
void reverseArray(int arr[]);
int n, i;

int main()
{
    int* arr;
    
	printf("Enter number of elements: ");
	scanf("%d",&n);

    arr = memoryAllocation();

    printf("Input elements of 1st Array: ");
    inputArray(arr);

    //Reversing of array
    reverseArray(arr);

    printf("Reverses elements of Array: ");
    printArray(arr);

	return 0;
}

int* memoryAllocation(){
	int *ptr = (int*) malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	return ptr;
}

void inputArray(int *arr){
    for (i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
}

void printArray(int *arr){
    for (i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
}

void reverseArray(int *arr){
    int temp;
    for (i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}