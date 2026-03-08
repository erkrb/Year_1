#include <stdio.h>

main(){
	int a,k=1;
	printf("Determine the number of nodes: ");scanf("%d",a);
//	number of nodes == a
//    for-loop for the crown of the pine tree
	for(int i=0;i<a;i++){
		for(int j=0;j<-i+1+4*a;j++)printf("");
		for(int j=0;j<2*i+1;j++)printf("*");
		if(i==4*k+1){
			k++;i=0;
		}
		printf("\n");
	}
//	for-loop for the non-leafy part of the pine tree
	for(int i=0;i<9;i++){
		for(int j=0;j<2*a;j++)printf("");
		for(int j=0;j<2*a+2;j++)printf("*");
		printf("\n");
	}
}
