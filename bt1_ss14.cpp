#include<stdio.h>
int linearSearch(int arr[], int n, int target){
	for(int i = 0; i < n; i++){
		if(arr[i] == target){
			return i;
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
	int result = linearSearch(arr, n, target);
	
	if(result != -1){
		printf("Phan tu %d nam o vi tri %d\n",target, result);
	}else{
		printf("Ko tim thay %d", target);
	}
}

