#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
    for(int i=1;i<=n;i++){
    	// tinh giai thua cho i
    	int s=1;
    	for(int j=1;j<=1;j++){
    		s*=j;
		}
		printf("%d! = %d\n",i,s);
	}
}
