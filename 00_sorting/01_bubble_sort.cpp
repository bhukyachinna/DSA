/*
 In bubble sort elements are sorted(if ascending) from right end of the container.
 Greatest element from unsorted part of the container gets bubbled up and moved
 to the sorted part of the container. This is the simple analogy for bubble sort. 
*/
#include<iostream>

using namespace std;

// Very basic version of bubble sort
void bubble_sort_00(int arr[], int n) {
	for(int pass = 0; pass < n - 1; pass++) {
		for(int i = 0; i < n - 1; i++){
			if(arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
		}
	}
}

// Improved version of bubble sort
void bubble_sort_01(int arr[], int n){
	for(int pass = 0; pass < n - 1; pass++){
		for(int i = 0; i < n - (pass + 1); i++){
			if(arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
		}
	}
}

// Optimized version of bubble sort
void bubble_sort_02(int arr[], int n){
	for(int pass = 0; pass < n - 1; pass++){
		bool flag = false;
		for(int i = 0; i < n - (pass + 1); i++){
			if(arr[i] > arr[i + 1]){
				swap(arr[i], arr[i + 1]);
				flag = true;
			}
		}
		if(!flag) break;
	}
}

int main(int argc, char* argv[]) {
	int n;
	printf("Enter total no.of elements : ");
	scanf("%i", &n);

	int arr[n];

	for(int i = 0; i < n; i++) {
		scanf("%i", &arr[i]);
	}

	printf("Array before sorting: ");
	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}

	// bubble_sort_00(arr, n);
	// bubble_sort_01(arr, n);
	bubble_sort_02(arr, n);

	printf("\nArray after sorting: ");
	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");

	return 0;
}
