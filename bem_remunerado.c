/* Seleção do funcionário mais bem remunerado de uma empresa com impressão do nome do mesmo - usar flag: nome == "fim"
   Autor: Prof. Cláudio
   Data:  03.07.17
*/

#include <stdio.h>
#include <string.h>

main() 
{
	char nome[31], 							/* string para armazenar 'nome' */
       nomefms[31];						/* nome do funcionário com maior remuneração */
	float salario,							/* salário do funcionário */
	      maiorsal;							/* maior salário pago na empresa */
	
	maiorsal = 0.0;
	do {
	  printf("Nome do funcionario (ate 30 caracteres): ");
	  scanf("%s", nome); 
	  if (strcmp(nome,"fim") == 0)
	    break;
	  printf("Salario do funcionario: ");
	  scanf("%f", &salario);       /* leia(salario) */
	  if (salario > maiorsal) {
	    maiorsal = salario;
	    strcpy(nomefms,nome);
	  }
	} while(1);
	printf("\n\nFuncionario mais bem remunerado: %s, com R$ %8.2f.\n\n\n", nomefms, maiorsal);
}
