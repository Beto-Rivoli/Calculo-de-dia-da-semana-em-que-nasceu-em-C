/* *******************************************************************
 * Colegio Técnico Antônio Teixeira Fernandes (Univap)
 * Curso Técnico em Informática - 
 * Autor do Projeto: Roberto Rivoli Gomes Júnior 
 *                     
 * 
 * Observação: <Programa Que calcula em que dia da semana a pessoa nasceu a partir das inserções do ano, mes e dia>
 * 			   < Foi utilizado os esquemas de switch, case e break para "agilizar" o processo> 
 * Calculo_de_dia_da_semana_com_switch.cpp
 * ******************************************************************/
#include<stdio.h>
#include<math.h> 
#include<conio.h> 

    int fm(int data, int mes, int ano) { 
    int fmes, salto; 
    if ((ano % 100 == 0) && (ano % 400 != 0)) salto = 0; 
    else if (ano % 4 == 0) 
    salto = 1;
     else 
    salto = 0; 
    fmes = 3 + (2 - salto) * ((mes + 2) / (2 * mes))+ (5 * mes + mes / 9) / 2;
    
     fmes = fmes % 7;
     return fmes; 
	}  
	   
    int dia_da_semana(int data, int mes, int ano) { 
    int diaOfsema; int YY = ano % 100; 
    int century = ano / 100; 
    printf("\nDate: %d/%d/%d \n", data, mes, ano);
     diaOfsema = 1.25 * YY + fm(data, mes, ano) + data - 2 * (century % 4); 
    
    //resto da divisao por 7 
	    diaOfsema = diaOfsema % 7; 
	    switch (diaOfsema) {
			 case 0: 
		        printf("dia da semana = Sabado"); 
		        break; 
		   case 1: 
		        printf("dia da semana = Domingo"); 
		        break;
		   case 2: 
		        printf("dia da semana = Segunda-feira"); 
		        break; 
		   case 3: 
		        printf("dia da semana = Terca-feira"); 
		        break; 
		   case 4: 
		        printf("dia da semana = quarta-feira"); 
		        break; 
		   case 5: 
		        printf("dia da semana = Quinta-feira"); 
		        break;
		   case 6: 
		        printf("dia da semana = Sexta-feira");
		         break;
		    default: 
		        printf("data incorreta"); 
		} 
		    return 0; 
	} 
	
int main() {
	
	 int data,mes, ano;
	 
     printf("\ndigite o ano: "); 
    scanf("%d", &ano); 
    
    printf("\nDigite o mes: "); 
    scanf("%d", &mes); 
    
    printf("\nDigite o dia: "); 
    scanf("%d", &data); 
    
    dia_da_semana(data, mes, ano);
     return 0;
	  
	 }
