#include<stdio.h>

void insertionSort(int arr[], int n){
	for( int i = 1; i < n; i++){
		int key = arr[i];
		int j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
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
	
	insertionSort(arr, n);
	printf("Mang sau khi sap xep : ");
	printArray(arr, n);
	return 0;
}

