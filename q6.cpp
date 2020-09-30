#include <stdio.h>

int boichungnhonhat(int a, int b){
	
	int min=1;
	for(int i=1;i<=a;i++){		
		if(a%i==0 && b%i==0){
			if (i<min){
				min=i;
			}
		}
	}
	return min;
}

int main(){
	int x,y;
	printf("Nhap x=");
	scanf("%d",&x);
	printf("Nhap y=");
	scanf("%d",&y);
	printf("boi chung nho nhat cua hai so la: %d",boichungnhonhat(x,y));
	
	
}
