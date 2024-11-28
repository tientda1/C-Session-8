#include<stdio.h>
int main(){
	int num,i,j;
	printf("Nhap vao 1 so nguyen de tao mang 2 chieu: ");
	scanf("%d", &num);
	int arr[num][num];
	printf("Nhap cac phan tu cho mang: [%d][%d]\n",num,num);
	for(i = 0;i<num;i++){
		for(j = 0;j<num;j++){
			printf("Phan tu tai vi tri [%d][%d] la: ", i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Ma tran da nhap: [%d][%d] \n", num, num );
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			printf("%d	", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

