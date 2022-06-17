#include<stdio.h>
#include<conio.h>
#include <ctype.h>
#include<locale.h>


int main()
{
    system("color 9f");
    setlocale(LC_ALL, "Portuguese");
	char conv1, conv2, theme, confirmacao;
	char *tp;
	float temp, c, k, f, rcpf, rcpk, rkpc, rkpf, rfpk, rfpc, value;
	int se, enquanto, font_color;
	do
	{
    	printf("Escolha a cor do tema escrevendo:\n\n C para tema CLARO\n E para tema ESCURO\nQualquer outro valor para manter come está\n\n\t\t");
    	scanf("%c", &theme);
    	if(theme=='c'){theme='C';}
    	if(theme=='e'){theme='E';}


    	if(theme=='C')
    	{
        	system("color f0");
        	printf("\nEscolha a cor da fonte inserindo o número correspondente da mesma:\n\n1-Azul escuro\t 8-Cinza\n2-Verde \t 9-Azul\n3-Verde água \t 10-Verde claro\n4-Vinho \t 11-Ciano\n5-Roxo   \t 12-Vermelho\n6-Dourado \t 13-Lilás\n7-Cinza claro \t 14-Amarelo\n\t15-Preto\n\t\t");
            fflush(stdin);
        	scanf("%d", &font_color);
        	switch(font_color)
        {
            	case 1: system("color f1"); break;
	            case 2: system("color f2"); break;
            	case 3: system("color f3"); break;
            	case 4: system("color f4"); break;
            	case 5: system("color f5"); break;
            	case 6: system("color f6"); break;
            	case 7: system("color f7"); break;
            	case 8: system("color f8"); break;
            	case 9: system("color f9"); break;
            	case 10: system("color fa"); break;
            	case 11: system("color fb"); break;
            	case 12: system("color fc"); break;
            	case 13: system("color fd"); break;
            	case 14: system("color fe"); break;
            	case 15: system("color f0"); break;
            	default: printf("Valor inválido!");
        	} //Fecha switch claro

    	printf("\nTem certeza que deseja manter as alterações de background?\n\t\tS-sim\n\t\tN-não\n");
        fflush(stdin);
    	scanf("%c", &confirmacao);
    	if(confirmacao=='n'){confirmacao='N';}if(confirmacao=='s'){confirmacao='S';}
    	if(confirmacao=='N'){system("color 9f");}

    	}//fecha if claro

    	if(theme=='E')
    	{
	        system("color 0f");
        	printf("\nEscolha a cor da fonte inserindo o número correspondente da mesma:\n\n1-Azul escuro\t 8-Cinza\n2-Verde \t 9-Azul\n3-Verde água \t 10-Verde claro\n4-Vinho \t 11-Ciano\n5-Roxo   \t 12-Vermelho\n6-Dourado \t 13-Lilás\n7-Cinza claro \t 14-Amarelo\n\t15-Branco\n\t\t");
            fflush(stdin);
        	scanf("%d", &font_color);
        	switch(font_color)
        	{
            	case 1: system("color 01"); break;
            	case 2: system("color 02"); break;
            	case 3: system("color 03"); break;
            	case 4: system("color 04"); break;
            	case 5: system("color 05"); break;
            	case 6: system("color 06"); break;
            	case 7: system("color 07"); break;
            	case 8: system("color 08"); break;
            	case 9: system("color 09"); break;
            	case 10: system("color 0a"); break;
            	case 11: system("color 0b"); break;
            	case 12: system("color 0c"); break;
            	case 13: system("color 0d"); break;
            	case 14: system("color 0e"); break;
            	case 15: system("color 0f"); break;
            	default: printf("Valor inválido!");

        	}//fecha switch escuro

    	printf("\nTem certeza que deseja manter as alterações de background?\n\t\tS-sim\n\t\tN-não\n");
        fflush(stdin);
    	scanf("%c", &confirmacao);
    	if(confirmacao=='n'){confirmacao='N';}if(confirmacao=='s'){confirmacao='S';}
    	if(confirmacao=='N'){system("color 9f");}
    	} //fecha if escuro


        system("cls");
    }/*fecha do*/ while(confirmacao=='N');







	for(enquanto=1;enquanto>0;)
	{
        printf("\n    Qual a temperatura? \n(Não é necessáro colocar °)\n 		");
        scanf("%f", &temp);

        printf("\n------------------------------\n    Converter...\n Digite F para Fahrenheit\n Digite C para Celcius\n Digite K para Kelvin\n\n 		");
        fflush(stdin);
        scanf("%c", &conv1);
        if(conv1=='f'){conv1='F';}	//conv1=='f' ? conv1='F': continue;
        if(conv1=='k'){conv1='K';} //conv1=='k' ? conv1='K': continue;
        if(conv1=='c'){conv1='C';} //conv1=='c' ? conv1='C': continue;

        printf("\n------------------------------\n    Para...\n Digite F para Fahrenheit\n Digite C para Celcius\n Digite K para Kelvin\n\n 		");
        fflush(stdin);
        scanf("%c", &conv2);
        if(conv2=='k'){conv2='K';} //conv2=='c' ? conv2='C': continue;
        if(conv2=='c'){conv2='C';} //conv2=='k' ? conv2='K': continue;
        if(conv2=='f'){conv2='F';} //conv2=='f' ? conv2='F': continue;


        if(conv1=='C' && conv2=='F'){
			c=temp;
			rcpf=c*18/10+32;
			value=rcpf;
            se=1;
		} if(conv1=='C' && conv2=='K'){
			c=temp;
			rcpk=c+273.15;
			value=rcpk;
            se=1;
		} if(conv1=='F' && conv2=='K'){
			f=temp;
			rfpk=(f-32)*5/9+273;
			value=rfpk;
            se=1;
		} if(conv1=='F' && conv2=='C'){
			f=temp;
			rfpc=(f - 32) * 5 / 9;
            se=1;
			value=rfpc;
		} if(conv1=='K' && conv2=='F'){
			k=temp;
			rkpf=(k-273)*18/10+32;
			value=rkpf;
            se=1;
		} if(conv1=='K' && conv2=='C'){
			k=temp;
			rkpc=k-273.15;
			value=rkpc;
            se=1;
		} if(conv2=='F'){
		    tp = "Fahrenheit";
		} else if(conv2=='K'){
		    tp = "Kelvin";
		} else if(conv2=='C'){
		    tp = "Celcius";
		}
		if(se==1)
            printf("%.2f°%c convertido para %s, resultou em %.2f°%c\n\n",temp, conv1, tp, value, conv2);
        else
            printf("Valor/formato inváldo!\n\n");
        getch();
        system("cls");
    } //fecha for
	 return 0;

}
