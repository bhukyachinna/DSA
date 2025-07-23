/*
 In selection sort elements are arranged from left end of the container.
 Always a smallest element is pick from unsorted part and swaped with 
 starting index of the unsorted part of the container.
*/

#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int pass = 0; pass < n - 1; pass++){
        int small_index = pass;
        for(int i = pass + 1; i < n; i++){
            if(arr[i] < arr[small_index]){
                small_index = i;
            }
        }
        if(small_index != pass) {
            swap(arr[small_index], arr[pass]);
        }
    }
}

int main(int argc, char* argv[]){
    
    int n = argc - 1;
    int arr[n];

    for(int i = 0; i < n; i++){
        arr[i] = atoi(argv[i + 1]);
    }

	printf("Array before sorting: ");
	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}

    selection_sort(arr, argc);
	printf("\nArray after sorting: ");
	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");    
    return 0;
}
