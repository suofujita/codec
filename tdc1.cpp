/*Viet chuong trinh nhap vao 1 so nguyen n va 1 ki tu ch roi in ra hinh vuong voi n hang,
moi hang co n ki tu ch */
#include <stdio.h>
int main() {
	int i,j,k,n;
	char ch;
	do {
		printf("Nhap so nguyen n (n>0): ");
		scanf("%d", &n);
	} while (n <= 0);
	// nhap 1 ki tu trong c
	getchar();
	printf("Nhap 1 ki tu bat ki: ");
	scanf("%c",&ch);
	
	// hinh vuong nxn ki tu
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%c",ch);
		printf("\n");
	}
	printf("\n");
	//tam giac duoi trai
	for (i=0;i<n;i++){
		for (j=0;j<=i;j++)
		printf("%c",ch);
		printf("\n");
	}
	printf("\n");
	//tam giac tren trai
	for (i=0;i<n;i++){
		for(j=n;j>i;j--)
		printf("%c",ch);
		printf("\n");
	}
	printf("\n");
	// tam giac tren phai
	for(i=0;i<n;i++){
		for(j=n;j>n-i;j--)
			printf(" ");
		for(k=n;k>i;k--)
			printf("%c",ch);
		printf("\n");
	}
	printf("\n");
	// tam giac duoi phai
	for(i=0;i<n;i++){
		for(j=n;j>i+1;j--)
			printf(" ");
		for(k=0;k<=i;k++)
			printf("%c",ch);
		printf("\n");
    }
	return 0;

}
