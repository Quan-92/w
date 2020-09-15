#include <stdio.h>
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	if(a>=2&a<=7){
		printf("day la tu thu hai den thu bay \n");
	}else{
		if(a==8){
			printf("day la chu nhat \n");
		}else{
			printf("day khong phai ngay trong tuan \n");
		}
	}
	
}
