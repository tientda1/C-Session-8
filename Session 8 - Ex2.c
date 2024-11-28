#include<stdio.h>
int main(){
	int i,num, arr[3]={1,2,3};
	printf("Nhap vao 1 so de kiem tra co trong mang hay khong: ");
	scanf("%d", &num);
	for(i = 0; i<3;i++){
		if(num != arr[i]){
			printf("Phan tu khong ton tai trong mang");
		}else{
			printf("Vi tri phan tu trong mang la: %d", i);
			break;
		}
	}
	
	return 0;
}

