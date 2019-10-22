#include	<stdio.h>
void NhapMang(int a[], int n)
{
	for(int i = 0; i < n ; i++)
	{
		printf("\n Nhap phan tu a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n)
{
	for(int i = 0; i < n; i++)	
		printf("%5d", a[i]);
}

int TinhTongLe(int a[], int n)
{
	int tongLe = 0;
	for(int i=0; i<n; i++)
		if(a[i] % 2 != 0)
			tongLe = tongLe + a[i];
	return tongLe;
}

int TimSoNhoNhat(int a[], int n)
{
	int min = a[0];
	for(int i = 1; i<n; i++)
		if(a[i] < min)
			min = a[i];
	return min;
}
//n cung la bien dem nen khong phai khai bao 
float TinhTrungBinhCong ( int a[], int n )
{
	int Tong = 0;
	for (int i = 0 ; i < n ; i++ )
		
		Tong+= a[i];
	return (float)Tong/n;
	
}

int main()
{
	int mangSoNguyen[100], soPhanTu, tongLe, soNhoNhat;
	printf("\n Nhap so phan tu: ");
	scanf("%d", &soPhanTu);
	NhapMang(mangSoNguyen, soPhanTu);
	printf("\n Cac gia tri vua nhap la: ");
	XuatMang(mangSoNguyen, soPhanTu);
	tongLe = TinhTongLe(mangSoNguyen, soPhanTu);
	printf("\n Tong cac so le trong mang la: %d", tongLe);
	soNhoNhat = TimSoNhoNhat(mangSoNguyen, soPhanTu);
	printf("\n Phan tu nho nhat trong mang la: %d", soNhoNhat);
	
	printf ("\n Trung binh cong cua cac phan tu trong mang la: %.2f", TinhTrungBinhCong(mangSoNguyen, soPhanTu));
	
	
	return 0;
}
