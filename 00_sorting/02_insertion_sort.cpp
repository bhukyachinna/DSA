/*
An array is divided into two subarrays: sorted subarray and unsorted subarray.
First element of unsorted subarray is compared with all the elements of the
sorted subarray and inserted at it's correct position.
*/

#include<stdio.h>

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i], j = i;
        while(j > 0 && temp < arr[j - 1]){
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = temp;
    }
}

int main(){
    int n;
    printf("Enter total no.of elements to be sortted : ");
	scanf("%i", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
		scanf("%i", &arr[i]);
	}
    
    printf("Array before sorting: ");
	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}

    insertion_sort(arr, n);
	printf("\nArray after sorting: ");
	for(int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");  
    return 0;
}