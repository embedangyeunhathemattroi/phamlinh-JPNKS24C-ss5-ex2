#include<stdio.h>
int main() {
	int so_nguyen_cho_truoc = 88;
	int so_nguoi_dung_nhap;
	printf("ban hay doan mot so bat ky trung voi so nguyen cho truoc ! \n");
	while (1) {
	   printf("Nhap so cua ban:");
	   scanf("%d", &&so_ban_nhap);
	   if (so_ban_nhap == so_nguyen_cho_truoc) {
	   	    printf ("ban that gioi.Chuc mung ban da doan dung. \n");
	   	    break;
	   	} else {
	   		printf("ban ngoc qua.Sai roi,thu lai di nao.\n");
	   	}
	}
	return 0;
}
