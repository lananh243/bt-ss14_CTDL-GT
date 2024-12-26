#include<stdio.h>

void bubbleSort(int arr[], int n){
	for(int i=0; i < n-1; i++){
		int swapped = 0;
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}
		if(swapped == 0){
			break;
		}
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
	
	bubbleSort(arr, n);
	printf("Mang sau khi sap xep : ");
	printArray(arr, n);
	return 0;
}

