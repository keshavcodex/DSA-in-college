#include <stdio.h>
#include <stdlib.h>

int* memoryAllocation();
void inputArray(int arr[]);
void printArray(int arr[]);
void swapArray(int arr1[], int arr2[]);
int n, i;

int main()
{
    int* arr1;
    int* arr2;
    
	printf("Enter number of elements: ");
	scanf("%d",&n);

    arr1 = memoryAllocation();
    arr2 = memoryAllocation();

    printf("Input elements of 1st Array: ");
    inputArray(arr1);
    printf("Input elements of 2nd Array: ");
    inputArray(arr2);

    //Swaping of array
    swapArray(arr1, arr2);

    printf("Elements of 1st Array: ");
    printArray(arr1);
    printf("\nElements of 2nd Array: ");
    printArray(arr2);

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

void swapArray(int *arr1, int *arr2){
    int temp;
    for (i = 0; i < n; i++) {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}