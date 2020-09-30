#include <stdio.h>
 
 int chuvi(int a, int b, int c){ 
 	int C;
 	
 	C=a+b+c;
 	
 	return C;
 	
 }
 
 
 int main(){
 	int x,y,z;
 	do{
 	  printf("Nhap do dai canh thu nhat:");
 	  scanf("%d",&x);
 	  printf("Nhap do dai canh thu hai:");
 	  scanf("%d",&y);
 	  printf("Nhap do dai canh thu ba:");
 	  scanf("%d",&z);
	   	
    }while(!((x+y)>z&&(x+z)>y&&(y+z)>x));
		
 	printf("Chu vi tam giac la: %d ",chuvi(x,y,z));
 	
 }
