#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	printf("Selecione o programa a executar:"
	"\n1-Idade"
	"\n2-Antecessor e Sucessor"
	"\n3-O cubo do número"
	"\n4-Salário"
	"\n5-Votos"
	"\n6-Prestações"
	"\n7-Rendimento diário\n");
	
	int contador;
	scanf(" %d", &contador);
	
	switch (contador){
	case 1:
		printf("Ano do seu nascimento: ");
		int nascimento;
		scanf(" %d", &nascimento);
		printf("Ano atual: ");
		int atual;
		scanf(" %d", &atual);
		int idade = atual - nascimento;
		printf("Sua idade = %d\n", idade);
		
		break;
	case 2:
		printf("Digite um número:");
		int number;
		scanf(" %d", &number);
		int numberAnte = number-1;
		int numberSuce = number+1;
		printf("%d", numberAnte);
		printf("\n%d", numberSuce);
		
		break;
	case 3:
		printf("Digite um número:");
		int number2;
		scanf("%d", &number2);
		int cubo = number2*number2*number2;
		printf("%d", cubo);
		
		break;
	case 4:
		printf("Qual seu salário atual:");
		float sal;
		scanf(" %f", &sal);
		printf("Qual a porcentagem do seu reajuste:");
		float porcen;
		scanf(" %f", &porcen);
		float porcentagem = porcen/100;
		float NovSal = sal+(sal*porcentagem);
		printf("Seu novo salário e: %f", NovSal);
			
	break;
	case 5:
		printf("Quantos votos foram brancos?");
		float brancos;
		scanf("%d", &brancos);
		printf("Quantos votos nulos?");
		float nulos;
		scanf("%d", &nulos);
		printf("Quantos votos válidos?");
		float validos; 
		scanf("%d", &validos);
		float total = brancos+nulos+validos;
		float brancosP = brancos/total;
		float nulosP = nulos/total;
		float validosP = validos/total;
		printf("A porcentagem de votos brancos foi: %f", brancosP);
		printf("A porcentagem de votos nulos foi: %f", nulosP);
		printf("A porcentagem de votos válidos foi: %f", validosP);
				
		break;
	case 6:
		printf("Quantasd prestações ao total?");
		float totalPresta;
		scanf("%f", &totalPresta);
		printf("Quantas já foram pagas?");
		float totalPagas;
		scanf("%f", &totalPagas);
		printf("Qual o valor atual?");
		float valorAtual;
		scanf("%f", &valorAtual);
		float faltaPagar= totalPresta-totalPagas;
		float saldoDeve=faltaPagar*valorAtual;
		printf("Seu saldo devedor atual é: %f", saldoDeve);
		printf("\nFaltam %f", faltaPagar, " prestações");
		
		break;
	case 7:
		printf("O valor do combustível: ");
		float combus;
		scanf("%f", &combus);
		printf("A quantidade de KMS no início do dia: ");
		float kmsInicio;
		scanf("%f", &kmsInicio);
		printf("A quantidade de KMS no final do dia: ");
		float kmsFinal;
		scanf("%f", &kmsFinal);
		printf("A quantidade de combustível gasto: ");
		float combusGasto;
		scanf("%f", &combusGasto);
		printf("O valor total recebido dos passageiros: ");
		float pago;
		scanf("%f", &pago);
		float mediaCombus = combusGasto/(kmsInicio-kmsFinal);
		float lucro = pago-(combus*combusGasto);
		
		printf("Consumo de combustível por KMs: %f", mediaCombus);
		printf("Lucro do dia: %f", lucro);
		
		
		break;
	default:
		printf("Escolha uma opção valída.");
		break;
	}
}
