#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	/* declara��o de vari�veis*/ 
	char nome[30];
	int vitorias;
	int derrotas;
	int saldoVitorias;
	char classes[][25] = {"Ferro", "Bronze", "Prata", "Ouro", "Diamante", "Lend�rio", "Imortal"};
	
	/* ENTRADA DE DADOS */ 
	
	printf("Por favor, insira o seu nome:\n");
	scanf("%s", nome);
	
	printf("Por favor, insira seu total de vit�rias:\n");
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
				  	printf("O Her�i %s tem de saldo %d.\n Est� no n�vel de %s", nome, saldoVitorias, classes[0]);
				  } else {
				  	if(saldoVitorias > 10 && saldoVitorias <= 20){
				  		printf("O Her�i %s tem de saldo %d.\n Est� no n�vel de %s", nome, saldoVitorias, classes[1]);
					  }else{
					  	if(saldoVitorias > 20 && saldoVitorias <= 50){
					  		printf("O Her�i %s tem de saldo %d.\n Est� no n�vel de %s", nome, saldoVitorias, classes[2]);
						  }else{
						  	if(saldoVitorias > 50 && saldoVitorias <= 80){
						  		printf("O Her�i %s tem de saldo %d.\n Est� no n�vel de %s", nome, saldoVitorias, classes[3]);
							  }else{
							  	if(saldoVitorias > 80 && saldoVitorias <= 90){
							  		printf("O Her�i %s tem de saldo %d.\n Est� no n�vel de %s", nome, saldoVitorias, classes[4]);
								  }else{
								  	if(saldoVitorias > 90 && saldoVitorias <= 100){
								  		printf("O Her�i %s tem de saldo %d.\n Est� no n�vel de %s", nome, saldoVitorias, classes[5]);
									  }else{
									  	if(saldoVitorias > 100){
									  		printf("O Her�i %s tem de saldo %d.\n Est� no n�vel de %s", nome, saldoVitorias, classes[6]);
										  }else{
										  	printf("N�o foi poss�vel calcular o n�vel do her�i %s.", nome);
										  }
									  }
								  }
							  }
						  }
					  }
				  }
 	return 0;
}
