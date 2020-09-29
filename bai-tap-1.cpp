#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap a[%d]=",i);
		scanf("%d",&a[i]);
		
	}
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<x && a[i]>max){
			max=a[i];
		}
	}
	printf("So nho hon x va gan x nhat la: %d",max);

     	
	
	
	
}
