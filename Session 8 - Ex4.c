#include<stdio.h>
int main(){
	int i,j,num;;
	int arr[3][3] = {{1,2,3},{4,5,6}};
	int max = arr[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(arr[i][j]>max){
				max = arr[i][j];
			}		
		}
	}
	printf("Phan tu lon nhat trong mang la: %d\n", max);
	return 0;
}

