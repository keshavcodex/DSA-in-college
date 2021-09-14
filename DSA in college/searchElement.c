#include <stdio.h>
#include <stdlib.h>

int* memoryAllocation();
void inputArray(int arr[]);
void searchElement(int arr[], int element);
int n, i;

int main()
{
    int* arr;
    int num;

	printf("Enter number of elements: ");
	scanf("%d",&n);

    arr = memoryAllocation();

    printf("Input elements Array: ");
    inputArray(arr);

    //Searching of elements
    printf("Enter the element to search: ");
    scanf("%d",&num);
    searchElement(arr, num);

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

void searchElement(int *arr, int element){
    for (i = 0; i < n; i++) {
        if(arr[i] == element){
            printf("Element found at index %d.", i);
            return;
        }
    }
    printf("Element not found");
}