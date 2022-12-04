#include<stdio.h>
void bai1(){
	int a,b;
	int x = 0;
		printf("chuong trinh kiem tra so nguyen to\n");
	do{
		printf("moi ban nhap so: ");
		scanf("%d",&a);
	}while(a<=0);
	for (b=2;b<=a-1;b++){
		if(a%b==0)
		x++;
	}
	if(x==0){
			printf("%d la so nguyen to\n", a);
	}else{
			printf("%d khong phai la so nguyen to\n",a);
	}
	
}
void bai2(){
	fflush(stdin);
		int a,b;
			printf("chuong trinh tim UCLN va BCNN cua 2 so \n");
			printf("moi ban nhap so thu  nhat: ");
			scanf("%d",&a);
			printf("moi ban nhap so thu hai: ");
			scanf("%d",&b);
	if(a>0&&b>0){
		int x;
			for(x=a;x>0;x--){
				if( a%x==0 && b%x==0){
					printf("UCLN cua 2 so la : %d\n",x);
					break;
				}
			}
		int y;
			for(y=1;y>0;y++){
				if (y%a==0 && y%b==0){
					printf("BCNN cua 2 so la: %d\n", y);
					break;
				}
			}
	}else{
		printf("phai nhap a va b lon hon 0! moi nhap lai\n");
	}	
}

void bai3(){
	printf("chuong trinh doi tien\n");
		int menhGia[] = {500,200,100,50,20,10,5,2,1};
		int soTien;
		int soToTien,i=0;
			printf("moi nhap so tien: ");
			scanf("%d", &soTien);
		while(soTien){
			for(i=0;i<9;i++){
				soToTien = soTien / menhGia[i];
				if(soToTien != 0){
					printf("co %d to %d\n",soToTien,menhGia[i]);
				}
				soTien = soTien - soToTien * menhGia[i];
			}
		}
}

int main(){
	int a;
		do{
			printf("===================MENU====================\n");
			printf(" 1: kiem tra so nguyen to \n");
			printf(" 2: UCLN va BCNN cua 2 so \n");
			printf(" 3: doi tien \n");
			printf("===========================================\n");
			printf("moi ban nhap tu [1-3]: ");
			scanf("%d", &a);
			switch(a){
				case 1:
					bai1();
					break;
				case 2:
					bai2();
					break;
				case 3:
					bai3();
					break;
				default:
					printf("ban nhap sai chuc nang! moi nhap lai.\n");
			} 
		}while(a!=1||a!=2||a!=3);
	return 0;
}

