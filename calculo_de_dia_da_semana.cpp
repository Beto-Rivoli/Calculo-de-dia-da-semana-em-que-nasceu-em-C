/* *******************************************************************
 * Colegio Técnico Antônio Teixeira Fernandes (Univap)
 * Curso Técnico em Informática - 
 * Autor do Projeto: Roberto Rivoli Gomes Júnior 
 * 
 * Observação: <Usuario digita a data >
 * 
 * calculo_de_dia_da_semana.cpp
 * ******************************************************************/
#include<stdio.h>
#include<conio.h> 
#include<stdlib.h>

    int fm(int data, int mes, int ano){ 
    int fmes, salto; 
    //calculo do ''salto''
    	if ((ano % 100 == 0) && (ano % 400 != 0)){
	 	salto = 0;} 
    		else if (ano % 4 == 0){ 
    		salto = 1;
    			 }else{
    				salto = 0; }
    				fmes = 3 + (2 - salto) * ((mes + 2) / (2 * mes))+ (5 * mes + mes / 9) / 2;
    
    				 fmes = fmes % 7;
     				 return fmes; 
	 }     
    int dia_da_semana(int data, int mes, int ano)
    
	 { 
     	int diaOfsema; 
	 	int YY = ano % 100;  
     	int century = ano / 100; 	 
      diaOfsema = 1.25 * YY + fm(data, mes, ano) + data - 2 * (century % 4); 
       printf("\nData: %d/%d/%d \n", data, mes, ano);
     //resto da divisao por 7  para saber o dia da semana
      diaOfsema = diaOfsema % 7;
			if (diaOfsema == 0){
  			printf("dia da semana = sabado");
				}else{
					if (diaOfsema == 1){
						printf("dia da semana = domingo");
						}else{
						if(diaOfsema == 2){
							printf("dia da semana = segunda-feira");
							}else{
							if(diaOfsema == 3){
								printf("dia da semana = terca-feira");
								}else{
								if(diaOfsema == 4){
									printf("dia da semana = quarta-feira");
								 	 }else{
									 if(diaOfsema == 5){
								 	 	printf("dia da semana = quinta-feira");
										}else{
											
										if(diaOfsema == 6){	
											printf("dia da semana = sexta-feira");
										}
											else if(diaOfsema >= 7){
												printf("data incorreta");
											}
										}
									}
								}
							}
						}
				 	}
  	 } 
int main() 
{ 
int data,mes, ano;
     printf("\ndigite o ano: "); 
    scanf("%d", &ano); 
    printf("\nDigite o mes: "); 
    scanf("%d", &mes); 
    printf("\nDigite o dia: "); 
    scanf("%d", &data); 
    dia_da_semana(data, mes, ano);
     return 0; }
