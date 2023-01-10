#include<stdio.h>
int main() {
   int a, b, c, d, min1,min2,Tt,hr=0 ;
   
   printf("time taken to travel between any first two points in hour and minutes:");
   scanf("%d %d", &a, &b);
  
    printf("time taken to travel between other two points in hour and minutes:");
   scanf("%d %d", &c,&d);
  
   
   min1 = a * 60 + b;
   min2 = c * 60 + d; 
   Tt = min1 + min2;
   
   if(Tt>=60){
   	hr=Tt/60;
   	Tt=Tt%60;
   }
   if(hr!=0)
   {
   	printf("\n total time taken to travel between  three points   is %d hr %d min",hr,Tt);
   	
   }
  else if(hr==0)
  {
  	printf("\n total time taken to travel between three points is %d min",Tt);
  }
   
  
   return 0; 
   
   
}
