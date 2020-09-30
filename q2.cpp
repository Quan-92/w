#include <stdio.h>
int tong(int n){
	
	int S=0;
	for(int i=0;n!=0;i++){
	
	  S=S+n%100;
	  n/=100;
	
	}
	return S;	
}

int main(){
   int x;
   printf("Nhap x=");
   scanf("%d",&x);
   printf("Tong cac chu so cua %d la %d",x,tong(x));	
		
}
