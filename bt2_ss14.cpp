#include<stdio.h>

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
	int n,target;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n; i++){
		printf("arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Nhap phan tu muon tim : ");
	scanf("%d",&target);
	int result = binarySearch(arr, n, target);
	
	if(result != -1){
		printf("Phan tu %d nam o vi tri %d\n",target, result);
	}else{
		printf("Ko tim thay %d", target);
	}
}

