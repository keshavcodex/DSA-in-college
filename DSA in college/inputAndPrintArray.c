#include <stdio.h>
#include <stdlib.h>

void memoryAllocation();
void inputArray(int arr[], int size);
void printArray(int arr[], int size);

int* ptr;
int n, i;

int main()
{

	// Number of elements for the array
	printf("Enter number of elements: ");
	scanf("%d",&n);

    memoryAllocation(n);
    if(ptr != NULL) {
        inputArray(ptr, n);
        printArray(ptr, n);
	}

	return 0;
}
void memoryAllocation(int n){
	ptr = (int*) malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	
}
void inputArray(int *arr, int size){

		printf("Enter %d elements: ", size);
		for (i = 0; i < n; ++i) {
            scanf("%d",&arr[i]);
		}

}
void printArray(int *arr, int size){

		printf("Array Elements: ");
		for (i = 0; i < n; i++) {
			printf("%d, ", arr[i]);
		}
}