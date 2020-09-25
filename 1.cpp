#include <stdio.h>
int main(){
	int n;
	do{
		printf("n=");
		scanf("%d",&n);
	}while(n<0);
	if(n==0){
		printf("vi tri 0 la 0");
	}else if(n<3){
		printf("vi tri %d la 1");
	}else{
		int x1=0,x2=1,x3=1;
		for(int i=3;i<=n;i++){
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}
		printf("vi tri %d la %d",n,x3);
	}
}
