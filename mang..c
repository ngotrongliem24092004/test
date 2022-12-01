#include<stdio.h>
int main(){
	int x,i=0;
	printf("moi nhap so phan tu trong mang: ");
	scanf("%d",&x);
	int a[x];
	for(i=0;i<x;i++){
		printf("moi nhap [%d]: ",i);
		scanf("%d",&a[x]);
	}
	int j;
	for(i=0;i<x;i++){
		for(j=0;j<i;j++){
			if(a[i]<a[j]){
				x = a[i];
				a[i]= a[j];
				a[j]= x;
			}	
		}
	}
	for(i=0;i<x;i++)
		printf("%d\t",a[i]);
	
	return 0;
}






