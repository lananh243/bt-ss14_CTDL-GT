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

int linearSearch(int arr[], int n, int target){
	for(int i = 0; i < n; i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
} 

int binarySearch(int arr[], int n, int target){
	int low = 0;
	int high = n - 1;
	while(low <= high){
		int mid = low + (high - low) / 2;
		if(arr[mid] == target){
			return mid;
		}else if(arr[mid] > target){
			high = mid - 1;
		}else{
			low = mid + 1;
		}
	}
	return -1;
}

int main() {
	int n, searchValue, target;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Mang ban dau : ");
	printArray(arr, n);
	
	printf("Nhap phan tu muon tim : ");
	scanf("%d",&searchValue);
	int resultSearch = linearSearch(arr, n, searchValue);
	
	if(resultSearch != -1){
		printf("Phan tu %d nam o vi tri %d\n",searchValue, resultSearch);
	}else{
		printf("Ko tim thay %d", searchValue);
	}
	
	insertionSort(arr, n);
	printf("Mang sau khi sap xep : ");
	printArray(arr, n);
	
	printf("Nhap phan tu muon tim : ");
	scanf("%d",&target);
	int result = binarySearch(arr, n, target);
	
	if(result != -1){
		printf("Phan tu %d nam o vi tri %d\n",target, result);
	}else{
		printf("Ko tim thay %d", target);
	}
	return 0;
}

