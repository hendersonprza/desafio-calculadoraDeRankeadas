#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	/* declaração de variáveis*/ 
	char nome[30];
	int vitorias;
	int derrotas;
	int saldoVitorias;
	char classes[][25] = {"Ferro", "Bronze", "Prata", "Ouro", "Diamante", "Lendário", "Imortal"};
	
	/* ENTRADA DE DADOS */ 
	
	printf("Por favor, insira o seu nome:\n");
	scanf("%s", nome);
	
	printf("Por favor, insira seu total de vitórias:\n");
	scanf("%d", &vitorias);
	
	printf("Por favor, insira seu total de derrotas:\n");
	scanf("%d", &derrotas);
	
	/* PROCESSAMENTO DE DADOS */ 
	
	int CalcularRank(x, y){
		int calculadora = x - y;
		return calculadora;
	}
	saldoVitorias = CalcularRank(vitorias, derrotas);
				  if(saldoVitorias <= 10){
				  	printf("O Herói %s tem de saldo %d.\n Está no nível de %s", nome, saldoVitorias, classes[0]);
				  } else {
				  	if(saldoVitorias > 10 && saldoVitorias <= 20){
				  		printf("O Herói %s tem de saldo %d.\n Está no nível de %s", nome, saldoVitorias, classes[1]);
					  }else{
					  	if(saldoVitorias > 20 && saldoVitorias <= 50){
					  		printf("O Herói %s tem de saldo %d.\n Está no nível de %s", nome, saldoVitorias, classes[2]);
						  }else{
						  	if(saldoVitorias > 50 && saldoVitorias <= 80){
						  		printf("O Herói %s tem de saldo %d.\n Está no nível de %s", nome, saldoVitorias, classes[3]);
							  }else{
							  	if(saldoVitorias > 80 && saldoVitorias <= 90){
							  		printf("O Herói %s tem de saldo %d.\n Está no nível de %s", nome, saldoVitorias, classes[4]);
								  }else{
								  	if(saldoVitorias > 90 && saldoVitorias <= 100){
								  		printf("O Herói %s tem de saldo %d.\n Está no nível de %s", nome, saldoVitorias, classes[5]);
									  }else{
									  	if(saldoVitorias > 100){
									  		printf("O Herói %s tem de saldo %d.\n Está no nível de %s", nome, saldoVitorias, classes[6]);
										  }else{
										  	printf("Não foi possível calcular o nível do herói %s.", nome);
										  }
									  }
								  }
							  }
						  }
					  }
				  }
 	return 0;
}
