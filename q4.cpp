#include <stdio.h>
#include <math.h>
float dientich(int a, int b, int c){
	float S,p;
	p=((a+b+c)/2);
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	
	return S;
	
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
    
    float DT=dientich(x,y,z);
    printf("Dien tich tam giac la:%f",DT);
	
	
}
