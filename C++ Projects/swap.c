#include<stdio.h>  
void swap(int *a, int *b) 
{
    int temp;
      
    temp = *q; 
    *q  = *p; 
    *p  = temp;  
    printf("\n a=  %d b = %d",a,b);  
    
    }

int main()            
{  
    int a,b;   
    a =15;           
    b= 30;
    printf("b a= %d b = %d",a,b);   
   swap(&a,&b);
}