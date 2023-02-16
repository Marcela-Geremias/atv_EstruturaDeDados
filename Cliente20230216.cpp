#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Cliente
	{
		char nome[100];
		int idade;
		char sexo[1];
		
		Cliente()
		{
			strcpy (nome, "");
			strcpy(sexo, "");
			idade = 0;	
		}
		
		void ler()
		{
			printf ("Digite seu nome: "),
			scanf ("%s", nome);
				
	    int dia1, dia2, mes1, mes2, ano1, ano2;
		
	    
	    printf ("Digite o dia do nascimento: ");
	    scanf ("%d", &dia1);
	    printf ("Digite o mes de nascimento: ");
	    scanf ("%d", &mes1);
	    printf ("Digite o ano de nascimento: ");
	    scanf ("%d", &ano1);
	    
		dia2 = 16;
	    mes2 = 02;
	    ano2 = 2023;

	    idade = ano2 - ano1;
	    if (mes2<=mes1)
	    {
	    	idade--;
		}
		else if (dia2<dia1)
	    {
			idade--;
		}

	    printf ("Idade =  %d\n", idade);
	    
	    printf ("Digite seu sexo: ");
		scanf ("%s", &sexo); 
			
		}
		
		void imprimir()
		{
			printf ("Nome: %s\n Idade: %d\n Sexo: %s\n", nome, idade, sexo);
		}

	};
	
int menu()
{
	int opcao;
		
	printf ("........MENU........\n");
	printf ("Escolha a opcao desejada:\n");
	printf ("1. Cadastrar cliente.\n");
	printf ("2. Listar clientes.\n");
	scanf ("%d", &opcao);
		
	return opcao;
		
}
		

int main ()
{
	int i = 0;
	Cliente lista[50];
	
	while (1 == 1)
	{
		int opcao = menu();
	
		if (opcao == 1)
		{
			lista[i].ler();
			i++;
		}

		else if (opcao == 2)
		{
			for (int j = 0; j < i; j++)
			{
				
				lista[j].imprimir();
				
			}
		}
		
		else
		{
			break;
		}
	}	
	
	return 0;
}

