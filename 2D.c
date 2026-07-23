//2D array exanple 
#include<stdio.h>
void main(){
	int arr[2][3];
	//initialization 
	arr[0 ][0]=10;
	arr[0 ][1]=11;
	arr[0 ][2]=12;
	arr[0 ][3]=13;
	
	
	
	arr[1 ][0]=20;
	arr[1 ][1]=21;
	arr[1 ][2]=22;
	arr[1 ][3]=23;
	
	
	// to diplay 
	int i,j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d ",arr[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	
	}
