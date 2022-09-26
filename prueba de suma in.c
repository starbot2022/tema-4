#include<stdio.h>

float media(float sum, int num ){

float total = sum / num ;
return total;
}
 int main(){
 	
 	
 	float sum=0;
 	float n=0;
	int num;
	
	printf("escribe la cantidad de numeros a sumar: ");
	scanf("%d",&num);
	
	
	float amount;
	
	
	for(int i = 0;i<num; i++){
		printf("introduzca numero a sumar: ");
		scanf("%f",&sum);
		
		
		sum=sum+amount;
		

}		
	printf("la media tota es de  %f" ,media(sum, num ));		
	return 0;
	
	
}
	

 
 	
 		
	
		


