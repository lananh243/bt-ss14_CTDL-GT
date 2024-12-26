#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selectionSort(int arr[], int n){
	for(int i = 0; i < n - 1; i++){
		int min_index = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}
		swap(&arr[min_index], &arr[i]);
	}
}

void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}
int main() {
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Mang ban dau : ");
	printArray(arr, n);
	
	selectionSort(arr, n);
	printf("Mang sau khi sap xep : ");
	printArray(arr, n);
	return 0;
}

