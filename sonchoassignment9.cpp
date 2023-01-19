#include<stdio.h>
int main(){
	int arr[4]={13,2700 ,800,650 },i,c=arr[0],d=arr[0],e=c,f=c;
	for(i=1;i<4;i++){
		if(c>arr[i]){
			c=arr[i];
		}
	}
		for(i=1;i<4;i++){
		if(arr[i]>d){
			d=arr[i];
		}
    }
    	for(i=0;i<4;i++){
		if(arr[i]>e && arr[i]<d){
			e=arr[i];
		}
	}
		for(i=1;i<4;i++){
		if(arr[i]>c && arr[i]<e){
			f=arr[i];
		}
	}
    
	printf(" third largest number is %d",f);
 
}
	
	
	
	

	

