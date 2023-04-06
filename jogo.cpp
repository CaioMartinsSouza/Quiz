#include <stdio.h>
 	main(){
 		int erros, acertos, res;
 		
 		acertos= 0;
 		erros= 0;
 		
 		printf("Bem-Vindo ao quiz de perguntas e respostas\n\n");
 		
 		//Pergunta 1
 		printf("1- Quando foi criado o primeiro smartphone da historia?\n");
 		printf(" Digite  1 para resposta a)2000 \n Digite 2 para a resposta b) 1994\n Digite 3 para a resposta c) 1998\n");
 		scanf("%d", &res);
		
			if (res != 2){
				printf("Resposta incorreta !\n");
				acertos++;
			}
			else {
				printf("Resposta correta !\n");
			}
		
		
		//Pergunta2
 		printf("2- Qual a resolucao de uma imagem FULL HD?\n");
 		printf(" Digite 1 para resposta a) 1920 X 1980\n Digite 2 para resposta b) 1280 X 720\n Digite 3 para resposta c) 2560 X 1440\n");
 		scanf("%d", &res);
 		
 			if (res != 1){
 				printf("Resposta incorreta !\n");
 				acertos++;
		 	}
		 	else {
		 		printf("Resposta correta !\n");
		 		erros++;
		 	}
		 
		 
		 //Pergunta 3
		 printf("3- Quantos bits cabem em um byte?\n");
		 printf(" Digite 1 para resposta a) 12 bits\n Digite 2 para resposta b) 1 bits\n Digite 3 para resposta c) 8 bit\n");
		 scanf("%d", &res);
		
			if (res != 3){
				printf("Resposta incorreta !\n");
				acertos++;
			}
		
			else {
				printf("Resposta correta !\n");
				erros++;
			}
		
		
		//Pergunta 4
		printf("4- Qual o nome do ataque cibernetico que atingiu computadores no mundo todo este ano?\n");
		printf (" Digite 1 para a) WannaSpy\n Digite 2 para resposta b) WannaFly\n Digite 3 para resposta c) WannaCry\n");
		scanf("%d", &res);
		
			if(res != 3){
				printf("Resposta incorreta !\n");
				acertos++;
			}
			else{
				printf("Resposta correta !\n");
				erros++;
			}
		
		
		//Pergunta 5
		printf ("5- Qual foi a duracao do primeiro vídeo do Youtube?\n");
		printf(" Digite 1 para resposta a) 18 segundos\n Digite 2 para resposta b) 1 minuto\n Digite 3 para 3 minutos\n");
		scanf ("%d", &res);
		
			if (res != 1){
				printf("Resposta incorreta !\n");
				acertos++;
			}
			else {
				printf("Resposta correta !\n");
				erros++;
			}
		
		
		//Pergunta 6 
		printf("6- Qual foi o primeiro tweet da historia?\n");
		printf(" Digite 1 para resposta a) Ola, mundo\n Digite 2 para resposta b) Estou preparando meu twitter\n Digite 3 para resposta c) Ola, twitter\n");
		scanf("%d", res);
		
			if (res != 2) {
				printf("Resposta incorreta !\n");
				acertos++;
			}
			else {
				printf("Resposta correta !\n");
				erros++;
			}
		
		
		//Pertgunta 7
		printf("7- O que significa a sigla www na internet?\n");
		printf (" Digite 1 para resposta a) World wide web\n Digite 2 para resposta b) Web world wide\n Digite 3 para resposta c) Web wide World");
		scanf("%d", res);
		
			if (res != 1){
				printf("Resposta incorreta !\n");
				acertos++;
			}
			else {
				printf("Resposta correta !\n");
				erros++;
			}
			
		
		//Pergunta 8
		printf("8- Qual destes passwords foi o mais usado na internet?\n");
		printf(" Digite 1 para resposta a) a1b2c3\n Digite 2 para a resposta b) abcdef\n Digite 3 para resposta c)123456\n");
		
			if (res != 3){
				printf("Resposta incorreta !\n");
				acertos++;
			}	
			else {
				printf("Resposta correta !\n");
				erros++;
			}
			
		
		//Pergunta 9
		printf("9- Qual foi a primeira rede social da historia da internet?\n");
		printf(" Digite 1 para respota a) MySpcae\n Digite 2 para resposta b) Classmate\n Digite 3 para a resposta c) Orkut\n");
		scanf("%d", res);
		
			if (res != 2){
				printf("Resposta incorreta !\n");
				acertos++;
			}
			else {
				printf("Resposta correta !\n");
				erros++;
			}
		
		
		//Pergunta 10
		printf("Em media, quantas pesquisas totalmente novas sao feitas no Google por dia?\n");
		printf(" Digite 1 para resposta a) 450 milhoes\n Digite 2 para resposta 1 bilhao\n Digite 3 para resposta c)280 milhoes\n");
		scanf("%d", res);
		
			if (res != 1){
				printf("Resposta incorreta !\n");
				acertos++;
			}
			else {
				printf("Resposta correta !\n");
				erros++;
			}
	
			printf("Acertos: %d", acertos);
			printf("Erros: %d", erros);
	}	
	
	
	 
