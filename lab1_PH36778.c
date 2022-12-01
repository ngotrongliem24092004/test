//lab1
#include <stdio.h>
#include <math.h>
//Day la 1 ham
void bai1(){
	int a, b, c;
	printf("moi nhap a: "); scanf("%d",&a);
	printf("moi nhap b: "); scanf("%d",&b);
	printf("moi nhap c: "); scanf("%d",&c);
    int abc = (a+b)*c;
    printf(" (%d + %d) * %d = %d",a,b,c,abc);
}

void bai2(){
	fflush(stdin);
	char kiTu;
		printf("moi nhap ki tu bat ki tu ban phim: ");
		scanf("%c",&kiTu);
	if(kiTu>='a'&&kiTu<='z'){
		printf("%c la chu thuong", kiTu);
	}else
		if(kiTu>='A'&&kiTu<='Z'){
			printf("%c la ki tu in hoa", kiTu);
		}
	else printf("%c khong phai ki tu chu", kiTu);
}

void bai3(){
	fflush(stdin);
	float a;
		printf("moi ban nhap diem: ");
		scanf("%f",&a);
	if(a>=9){
		printf("hoc luc xuat sac");
	}else
	if(a<9&&a>=8){
		printf("hoc luc gioi");
	}else
	if(a<8&&a>=6.5){
		printf("hoc luc kha");
	}else
	if(a<6.5&&a>=5){
		printf("hoc luc trung binh");
	}else
	if(a<5&&a>=3.5){
		printf("hoc luc yeu ");
	}else
	if(a<3.5){
		printf("hoc luc kem");
	}
	
}

void bai4(){
	float a, b, c;
		printf("moi ban nhap a: ");
		scanf("%f", &a);
		printf("moi ban nhap b: ");
		scanf("%f", &b);
		printf("moi ban nhap c: ");
		scanf("%f", &c);
	float d = pow(b,2)-4*a*c;
	if(a==0){
		printf("moi ban nhap he so a khac 0");
	}
	else{
		if(d>0){
			printf("phuong trinh co 2 nghiem:\n");
			printf("x1 = %.2f \n", (-b+sqrt(d))/(2*a));
			printf("x2 = %.2f ", (-b-sqrt(d))/(2*a));
		}
		if (d==0){
			printf("phuong trinh co 1 nghiem:%.2f", -b/2*a);
		}
		if (d<0){
			printf("phuong trinh vo nghiem");
		}
	}
}

void bai5(){
	const float bac1 = 1.678;
	const float bac2 = 1.734;
	const float bac3 = 2.014;
	const float bac4 = 2.536;
	const float bac5 = 2.834;
	const float bac6 = 2.927;
	int sodien;
	float tiendien = 0;
		printf("moi nhap so dien hang thang: ");
		scanf("%d", &sodien);
	if (sodien<=50){
		tiendien = sodien * bac1;
	}else
	if(sodien<=100){
		tiendien = 50 * bac1 + ( sodien -50) * bac2;
	}else
	if(sodien<=200){
		tiendien = 50 * bac1 + 50 * bac2 + ( sodien - 100 ) * bac3;
	}else
	if(sodien<=300){
		tiendien = 50 * bac1 + 50 * bac2 + 100 * bac3 + ( sodien - 200 ) * bac4;
	}else
	if(sodien<=400){
		tiendien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + ( sodien - 300 ) * bac5;
	}else{
		tiendien = 50 * bac1 + 50 * bac2 + 100 * bac3 + 100 * bac4 + 100 * bac5 + ( sodien - 400 ) * bac6;
	}
	printf("so dien tieu thu hang thang la: %d va so tien can phai dong la: %.2f",sodien, tiendien);
}
		
 

int main(){
	int chon;
		printf("---------- MENU ----------\n");
		printf("1. Bai 1 - Kiem tra chan le\n");
		printf("2. Bai 2 - Kiem tra ky tu\n");
		printf("3. Bai 3 - Xep loai hoc luc\n");
		printf("4. Bai 4 - Giai PT bac 2\n");
		printf("5. Bai 5 - Tinh tien dien\n");
		printf("--------------------------\n");
		printf("Moi chon chuc nang [1-5]: ");
		scanf("%d",&chon);
			switch(chon){
		case 1:
			bai1();
			break;
		case 2:
			bai2();
			break;
		case 3:
			bai3();
			break;
		case 4:
			bai4();
			break;
		case 5:
			bai5();
			break;
		default:
			printf("Chon sai chuc nang");
	}
	return 0;
}


