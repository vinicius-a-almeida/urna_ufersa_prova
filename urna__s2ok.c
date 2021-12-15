#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
void tela_1 ();
void tela_2 ();
void david ();
void vini ();
void polly ();
void karla ();
void dyego ();
void had ();
void lav ();
void fim ();
void erro ();
void cara ();
void mario ();
int main (){
setlocale(LC_ALL, "");
system("color 1F");	
printf("\n       Universidade Federal Rural do Semi-�rido (UFERSA)         \n\n");
printf("            Bacharelado em Tecnologia da Informa��o               \n\n");
printf("             Disciplina: LABORAT�RIO DE ALGORITMOS                \n\n");
printf("                    Professor: Dyego Magno                        \n\n");
printf("             Discente: Roberto Fernandes Rocha                    \n\n");
printf("             Discente: Vinicius Anacleto de Almeida               \n\n");
system ("pause");
    int opcao, fim_t=0, q_vots=0, q_disc, senha_de_acesso=123, i, voto_david=0, voto_vini=0, voto_polly=0, voto_karla=0, voto_dyego=0, voto_rep_branc=0, vot_rep_nul=0;
    int voto_had=0, voto_lav=0, voto_pres_nul=0, voto_pres_branc=0, volta=1, sant, sant_esc=1, nulo_1;
    char voto_rep[6], voto_pres[3];
    while(1==1){
        system("color 07");
        system("clear || cls");
        printf("Para definir quantidade de votantes ---------- {1} \n\n");
         
        printf("Para iniciar vota��o ------------------------- {2} \n\n");

        printf("Para contabilizar votos ---------------------- {3} \n\n");

        printf("Para sair ------------------------------------ {4} \n\n");

        printf("Para os santinhos ---------------------------- {5} \n\n");
        printf("DIGITE A SUA OP��O >: ");
        scanf("%d", &opcao);
        switch (opcao){
        case(1):
            system("clear || cls");
            do{
                printf("digite a quantidade de votantes: ");
                scanf("%d", &q_disc);
                if(q_disc<31){
 	
                    printf("\na vota��o s� sera realizada com no minimo 31 discentes!\n");
                    printf("pressione enter para continuar");
                    getchar();getchar();
                    system("clear || cls");
                }system("clear || cls");
            }while(q_disc<31);
            q_vots = 1;
            break;
        case(2):
            if(q_vots!=1){
                system("clear || cls");
                erro();
                printf("falta inserir a quantidade de votantes!\n");
                system("pause");
                printf("\n\n");
                break;
            }for(i=1;i<=q_disc;i++){
            volta = 1;
            do{
            system("color F");
            tela_1();
            printf("voto: ");
            nulo_1=0;
            scanf(" %s", voto_rep);
                system("clear || cls");
                if(strcmp(voto_rep, "12345")==0){
                    david ();
                    system ("pause");
                    system("clear || cls");
                    voto_david++;
                    nulo_1++;
                }else if(strcmp(voto_rep, "67890")==0){
                    vini ();
                    system ("pause");
                    system("clear || cls");
                    voto_vini++;
                    nulo_1++;
                }else if(strcmp(voto_rep, "98765")==0){
                    polly ();
                    system ("pause");
                    system("clear || cls");
                    voto_polly++;
                    nulo_1++;
                }else if(strcmp(voto_rep, "43210")==0){
                    printf("seu voto foi confirmado\n");
                    printf("voc� votou em Karla Float\n\n");
                    karla ();
                    system ("pause");
                    system("clear || cls");
                    voto_karla++;
                    nulo_1++;
                }else if(strcmp(voto_rep, "48444")==0){
                    printf("seu voto foi confirmado\n");
                    printf("voc� votou em Dyego main\n\n");
                    dyego ();
                    system ("pause");
                    system("clear || cls");
                    voto_dyego++;
                    nulo_1++;
                }else if(strcmp(voto_rep, "00000")==0){
                    printf("voc� votou em branco\n\n");
                    voto_rep_branc++;
                    nulo_1++;
                }if(nulo_1==0){
                    printf("seu voto foi nulo\n\n");
                    vot_rep_nul++;
                }
            system("color 07");
            tela_2();
            printf("voto: ");
            nulo_1=0;
            scanf(" %3s", voto_pres);
            system("clear || cls");
            if(strcmp(voto_pres, "04")==0){
                had ();
                system ("pause");
                system("clear || cls");
                voto_had++;
                 nulo_1++;
            }else if(strcmp(voto_pres, "08")==0){
                lav ();
                system ("pause");
                system("clear || cls");
                voto_lav=0;
                 nulo_1++;
            }else if(strcmp(voto_pres, "00")==0){
                printf("voc� votou em branco\n\n");
                voto_pres_branc++;
                 nulo_1++;
            }if(nulo_1==0){
                printf("seu voto foi nulo\n");
                voto_pres_nul++;
                system("pause");
            system("clear || cls");
            }
            printf("para corrigir seu voto digite [0] \npara confirmar digite [1]: \n");
            scanf("%d", &volta);
            if(volta == 1){
			  fim();
			  
			  fim_t=0;
			    while (fim_t++ < 5){
                Sleep(1000);
				}
			}
            }while(volta==0);
            do{
                printf("insira a senha de acesso: ");
                scanf("%d", &senha_de_acesso);
                if(senha_de_acesso!=123){
                    printf("senha errada\n");
                }
            }while(senha_de_acesso!=123);
			}
            break;
        case (3):
        system("color 70");
            system("clear || cls");
            printf("+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
            printf("||                                                     ||\n");
            printf("||           \\/ REPRESENTANTE ESTUDANTIL \\/          ||\n");
            printf("||                                                     ||\n");
            printf("+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
            printf(" _______________________________________________________ \n");
            printf("|                + APURA��O DOS VOTOS +                 |\n");
            printf("| > total de votos para David Else:                  %d |\n", voto_david);
            printf("| > total de votos para Vinicius while:              %d |\n", voto_vini);
            printf("| > total de votos para pollyana Return:             %d |\n", voto_polly);
            printf("| > total de votos para Karla Float:                 %d |\n", voto_karla);
            printf("| > total de votos para Dyego Main:                  %d |\n", voto_dyego);
            printf("|_______________________________________________________|\n");
            printf("---------------------------------------------------------\n");
            printf("  > total de votos brancos ->                        %d  \n", voto_rep_branc);
            printf("  > total de votos nulos ->                          %d  \n", vot_rep_nul);
            printf("---------------------------------------------------------\n\n\n");
            printf("+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
            printf("||                                                     ||\n");
            printf("||           \\/   PRESIDENTE DO GR�MIO   \\/          ||\n");
            printf("||                                                     ||\n");
            printf("+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+_+\n");
            printf(" _______________________________________________________ \n");
            printf("|                + APURA��O DOS VOTOS +                 |\n");
            printf("| > total de votos para Hadija Printf:               %d |\n", voto_had);
            printf("| > total de votos Lav�nia Scanf:                   %d |\n", voto_lav);
            printf("|_______________________________________________________|\n");
            printf("\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/ \n");
            printf("---------------------------------------------------------\n");
            printf("  > total de votos brancos ->                        %d  \n", voto_pres_branc);
            printf("  > total de votos nulos ->                          %d  \n", voto_pres_nul);
            printf("---------------------------------------------------------\n");
            printf("\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/ \n");
            system("pause");
            break;
        case(4):
            printf("obrigado por usar nossos servi�os de elei��o\n atenciosamente: DUPLA DINAMICA >:");
            cara ();
            mario ();
            return 0;
        case(5):
            do{
            system("clear || cls");
            printf("\n\t\t \\/ ATEN��O \\/ \n\n OS SANTINHOS S� SER�O APENAS MOSTRADOS ANTES DE INICIAR A VOTA��O \n\n");
            printf("\t\t DIGITE A SUA OP��O \n\n");
            printf(" [1] SANTINHOS DOS REPRESENTANTES ESTUDANTIL\n\n");
            printf(" [2] SANTINHOS DOS PRESIDENTES DO GR�MIO ESTUDANTIL \n>: ");
            scanf("%d", &sant);
            if(sant== 1){
                    system("clear || cls");
                    david ();
                    vini ();
                    polly ();
                    karla ();
                    dyego ();
            }else if(sant==2){
                    system("clear || cls");
                    had ();
                    lav ();
            }else
                erro();
                printf("\n\ndeseja ver os santinhos mais uma vez? \n [0] sim\n [1] n�o \n>: ");
                printf("DIGITE A SUA OP��O >: ");
                scanf("%d", &sant_esc);
            }while(sant_esc == 0);
            break;
        default:
            system("clear || cls");
            erro ();
            system ("pause");
            break;
        }
    }
}
void tela_2(){
system("color 70");
printf("----------------------------------------------------------------------------------------------------\n");
printf("||                                               ||                                               ||\n");
printf("||       \\/    ELEI��ES ESTUDANTIS     \\/      ||        \\/    JUSTI�A ESTUDANTIL    \\/       ||\n");
printf("||                                               ||                                               ||\n");
printf("||                                               ||                                               ||\n");               
printf("||                                               ||                                               ||\n");                                                                                                                                                                                                                             
printf("||                                               ||                  1    2    3                  ||\n");
printf("||                                               ||                                               ||\n");
printf("||                                               ||                  4    5    6                  ||\n");
printf("||                 SEU VOTO PARA                 ||                                               ||\n");
printf("||                                               ||                  7    8    9                  ||\n");
printf("||            - PRESIDENTE DO GR�MIO -           ||                                               ||\n");
printf("||                                               ||                       0                       ||\n");
printf("||                                               ||                                               ||\n");
printf("||                                               ||          |BRANCO| |CORRIGE| |COMFIRMA|        ||\n");
printf("----------------------------------------------------------------------------------------------------\n");
}
void tela_1(){
system("clear || cls");
system("color 70");
printf("----------------------------------------------------------------------------------------------------\n");
printf("||                                               ||                                               ||\n");
printf("||              ELEI��ES  ESTUDANTIS             ||                JUSTI�A ESTUDANTIL             ||\n");
printf("||                                               ||                                               ||\n");
printf("||                                               ||                                               ||\n");               
printf("||                                               ||                                               ||\n");                                                                                                                                                                                                                             
printf("||                                               ||                  1    2    3                  ||\n");
printf("||                                               ||                                               ||\n");
printf("||                                               ||                  4    5    6                  ||\n");
printf("||                 SEU VOTO PARA                 ||                                               ||\n");
printf("||                                               ||                  7    8    9                  ||\n");
printf("||                                               ||                                               ||\n");
printf("||               - REPRESENTANTE -               ||                       0                       ||\n");
printf("||                                               ||                                               ||\n");
printf("||                                               ||          |BRANCO| |CORRIGE| |COMFIRMA|        ||\n");
printf("----------------------------------------------------------------------------------------------------\n");
}
void david(){
system("color 70");
printf(" ____________________________________________  \n");
printf("|                                            | \n");
printf("|                                            | \n");
printf("| PARTIDO: -------- (UFERSA)         FOTO    | \n");
printf("|                                  --------  | \n");
printf("|                                  |  ()  |  | \n");           
printf("| NOME: ----------- David Else     | (||) |  | \n");
printf("|                                  |  /\\  |  |\n");                                
printf("|                                  | /  \\ |  |\n");            
printf("| N�MERO: --------- 12345          --------  | \n");                  
printf("|                                            | \n");            
printf(" ____________________________________________  \n");
}
void vini (){
system("color 70");
printf(" ____________________________________________  \n");           
printf("|                                            | \n");
printf("|                                            | \n");
printf("| PARTIDO: -------- (UFERSA)         FOTO    | \n");
printf("|                                  --------  | \n");
printf("|                                  |  ()  |  | \n");           
printf("| NOME: ----------- Vinicius While | (||) |  | \n");
printf("|                                  |  /\\  |  |\n");                                
printf("|                                  | /  \\ |  |\n");            
printf("| N�MERO: --------- 67890          --------  | \n");                  
printf("|                                            | \n");            
printf("|____________________________________________| \n");
}
void polly (){
system("color 70");
printf(" ____________________________________________  \n");    
printf("|                                            | \n");
printf("|                                            | \n");
printf("| PARTIDO: ------- (UFERSA)          FOTO    | \n");
printf("|                                  --------  | \n");
printf("|                                  | /()\\ |  |\n");           
printf("| NOME: ---------- Pollyana Return | (||) |  | \n");
printf("|                                  |  /\\  |  |\n");                                
printf("|                                  | /  \\ |  |\n");            
printf("| N�MERO: -------- 98765           --------  | \n");                  
printf("|                                            | \n");            
printf("|____________________________________________| \n");
}
void karla (){
system("color 70");
printf(" ____________________________________________  \n"); 
printf("|                                            | \n");              
printf("|                                            | \n");
printf("| PARTIDO: -------- (UFERSA)         FOTO    | \n");
printf("|                                  --------  | \n");
printf("|                                  | /()\\ |  |\n");           
printf("| NOME: ----------- Karla Float    | (||) |  | \n");
printf("|                                  |  /\\  |  |\n");                                
printf("|                                  | /  \\ |  |\n");            
printf("| N�MERO: --------- 43210          --------  | \n");                  
printf("|                                            | \n");            
printf("|____________________________________________|\n"); 
}
void dyego (){
system("color 70");
printf(" ____________________________________________  \n"); 
printf("|                                            | \n");           
printf("|                                            | \n");
printf("| PARTIDO: -------- (UFERSA)         FOTO    | \n");
printf("|                                  --------  | \n");
printf("|                                  |  ()  |  | \n");           
printf("| NOME: -----------  Dyego Main    | (||) |  | \n");
printf("|                                  |  /\\  |  |\n");                                
printf("|                                  | /  \\ |  |\n");            
printf("| N�MERO: --------- 48444          --------  | \n");                  
printf("|                                            | \n");            
printf("|____________________________________________| \n"); 
}
void had (){
system("color 70");
printf(" ____________________________________________  \n");            
printf("|                                            | \n");
printf("|                                            | \n");
printf("| PARTIDO: -------- (UFERSA)         FOTO    | \n");
printf("|                                  --------  | \n");
printf("|                                  | /()\\ |  |\n");           
printf("| NOME: ----------- Hadija Printf  | (||) |  | \n");
printf("|                                  |  /\\  |  |\n");                                
printf("|                                  | /  \\ |  |\n");            
printf("| N�MERO: --------- 04             --------  | \n");                  
printf("|                                            | \n");            
printf("|____________________________________________| \n"); 
}
void lav (){
system("color 70");
printf(" ____________________________________________  \n");
printf("|                                            | \n");   
printf("|                                            | \n");
printf("| PARTIDO: -------- (UFERSA)         FOTO    | \n");
printf("|                                  --------  | \n");
printf("|                                  | /()\\ |  |\n");           
printf("| NOME: ----------- Lav�nia Scanf  | (||) |  | \n");
printf("|                                  |  /\\  |  |\n");                                
printf("|                                  | /  \\ |  |\n");            
printf("| N�MERO: --------- 08             --------  | \n");                  
printf("|                                            | \n");            
printf("|____________________________________________| \n");
}
void fim(){
system ("color 07");
printf(" !!!!!!!!!!!!     !!!     !!!!!          !!!!! \n");
printf(" !!!!!!!!!!!!     !!!     !!!!!!        !!!!!! \n");
printf(" !!!              !!!     !!! !!!      !!! !!! \n");
printf(" !!!              !!!     !!!  !!!    !!!  !!! \n");
printf(" !!!!!!!!!!       !!!     !!!   !!!  !!!   !!! \n");
printf(" !!!!!!!!!!       !!!     !!!    !!!!!!    !!! \n");
printf(" !!!              !!!     !!!     !!!!     !!! \n");
printf(" !!!              !!!     !!!      !!      !!! \n");
printf(" !!!              !!!     !!!              !!! \n");
printf(" !!!              !!!     !!!              !!! \n");
}
void erro(){
system("color 04");
printf(" !!!!!!!!!!     !!!!!!!!!!     !!!!!!!!!!     !!!!!!!!!!     !!!!!!!!!! \n"); 
printf(" !!!!!!!!!!     !!!!!!!!!!     !!!!!!!!!!     !!!!!!!!!!     !!!!!!!!!! \n"); 
printf(" !!!            !!!    !!!     !!!    !!!     !!!    !!!     !!!    !!! \n"); 
printf(" !!!!!!         !!!    !!!     !!!    !!!     !!!    !!!     !!!    !!! \n"); 
printf(" !!!!!!         !!!!!!!!!!     !!!!!!!!!!     !!!    !!!     !!!!!!!!!! \n"); 
printf(" !!!            !!! !!!        !!!  !!!       !!!    !!!     !!!  !!!   \n"); 
printf(" !!!!!!!!!!     !!!  !!!       !!!   !!!      !!!!!!!!!!     !!!   !!!  \n"); 
printf(" !!!!!!!!!!     !!!   !!!      !!!    !!!     !!!!!!!!!!     !!!    !!! \n");
}
void cara (){
	system("color D");
             printf("\t                                                \n");
             printf("\t                ||||||||||      ||||||||||      \n");
             printf("\t                ||      ||      ||      ||      \n");
             printf("\t                ||      ||      ||      ||      \n");
             printf("\t                ||   |||||      ||   |||||      \n");
             printf("\t                ||   |||||      ||   |||||      \n");
             printf("\t                ||||||||||      ||||||||||      \n");
             printf("\t                                                \n");
             printf("\t                             ||                 \n");
             printf("\t                             ||                 \n");
             printf("\t                             ||                 \n");
             printf("\t                             ||                 \n");
             printf("\t                             ||                 \n");
             printf("\t                             |||||||            \n");
             printf("\t                                  ||            \n");
             printf("\t                             |||||||            \n");
             printf("\t                                                \n");
             printf("\t           |||||||||||||||||||||||||||||||||||||\n");
             printf("\t           ||                                 ||\n");
             printf("\t           || muitxo bemm                     ||\n");
             printf("\t           ||                                 ||\n");
             printf("\t           |||||||||||||||||||||||||||||||||||||\n");
             printf("\t                                                \n");
}
void mario (){
    Beep(660,100);Sleep(150);
    Beep(660,100);Sleep(300);
    Beep(660,100);Sleep( 300);
    Beep(510,100);Sleep( 100);
    Beep(660,100);Sleep( 300);
    Beep(770,100);Sleep( 550);
    Beep(380,100);Sleep( 575);
    Beep(510,100);Sleep( 450);
    Beep(380,100);Sleep( 400);
    Beep(320,100);Sleep( 500);
    Beep(440,100);Sleep( 300);
    Beep(480,80);Sleep( 330);
    Beep(450,100);Sleep( 150);
    Beep(430,100);Sleep( 300);
    Beep(380,100);Sleep( 200);
    Beep(660,80);Sleep( 200);
    Beep(760,50);Sleep( 150);
    Beep(860,100);Sleep( 300);
    Beep(700,80);Sleep( 150);
    Beep(760,50);Sleep( 350);
    Beep(660,80);Sleep( 300);
    Beep(520,80);Sleep( 150);
    Beep(580,80);Sleep( 150);
    Beep(480,80);Sleep( 500);
    Beep(510,100);Sleep( 450);
    Beep(380,100);Sleep( 400);
    Beep(320,100);Sleep( 500);
    Beep(440,100);Sleep( 300);
    Beep(480,80);Sleep( 330);
    Beep(450,100);Sleep( 150);
    Beep(430,100);Sleep( 300);
    Beep(380,100);Sleep( 200);
    Beep(660,80);Sleep( 200);
    Beep(760,50);Sleep( 150);
    Beep(860,100);Sleep( 300);
    Beep(700,80);Sleep( 150);
    Beep(760,50);Sleep( 350);
    Beep(660,80);Sleep( 300);
    Beep(520,80);Sleep( 150);
    Beep(580,80);Sleep( 150);
    Beep(480,80);Sleep( 500);
    Beep(500,100);Sleep( 300);
    Beep(760,100);Sleep( 100);
    Beep(720,100);Sleep( 150);
    Beep(680,100);Sleep( 150);
    Beep(620,150);Sleep( 300);
    Beep(650,150);Sleep( 300);
    Beep(380,100);Sleep( 150);
    Beep(430,100);Sleep( 150);
    Beep(500,100);Sleep( 300);
    Beep(430,100);Sleep( 150);
    Beep(500,100);Sleep( 100);
    Beep(570,100);Sleep( 220);
    Beep(500,100);Sleep( 300);
    Beep(760,100);Sleep( 100);
    Beep(720,100);Sleep( 150);
    Beep(680,100);Sleep( 150);
    Beep(620,150);Sleep( 300);
    Beep(650,200);Sleep( 300);
    Beep(1020,80);Sleep( 300);
    Beep(1020,80);Sleep( 150);
    Beep(1020,80);Sleep( 300);
    Beep(380,100);Sleep( 300);
    Beep(500,100);Sleep( 300);
    Beep(760,100);Sleep( 100);
    Beep(720,100);Sleep( 150);
    Beep(680,100);Sleep( 150);
    Beep(620,150);Sleep( 300);
    Beep(650,150);Sleep( 300);
    Beep(380,100);Sleep( 150);
    Beep(430,100);Sleep(150);
    Beep(500,100);Sleep(300);
    Beep(430,100);Sleep(150);
    Beep(500,100);Sleep( 100);
    Beep(570,100);Sleep(420);
    Beep(585,100);Sleep(450);
    Beep(550,100);Sleep( 420);
    Beep(500,100);Sleep(360);
    Beep(380,100);Sleep(300);
    Beep(500,100);Sleep(300);
    Beep(500,100);Sleep( 150);
    Beep(500,100);Sleep(300);
    Beep(500,100);Sleep(300);
    Beep(760,100);Sleep( 100);
    Beep(720,100);Sleep( 150);
    Beep(680,100);Sleep( 150);
    Beep(620,150);Sleep( 300);
    Beep(650,150);Sleep( 300);
    Beep(380,100);Sleep( 150);
    Beep(430,100);Sleep( 150);
    Beep(500,100);Sleep( 300);
    Beep(430,100);Sleep( 150);
    Beep(500,100);Sleep( 100);
    Beep(570,100);Sleep( 220);
    Beep(500,100);Sleep( 300);
    Beep(760,100);Sleep( 100);
    Beep(720,100);Sleep( 150);
    Beep(680,100);Sleep( 150);
    Beep(620,150);Sleep( 300);
    Beep(650,200);Sleep( 300);
    Beep(1020,80);Sleep( 300);
    Beep(1020,80);Sleep( 150);
    Beep(1020,80);Sleep( 300);
    Beep(380,100);Sleep( 300);
    Beep(500,100);Sleep( 300);
    Beep(760,100);Sleep( 100);
    Beep(720,100);Sleep( 150);
    Beep(680,100);Sleep( 150);
    Beep(620,150);Sleep( 300);
    Beep(650,150);Sleep( 300);
    Beep(380,100);Sleep( 150);
    Beep(430,100);Sleep( 150);
    Beep(500,100);Sleep( 300);
    Beep(430,100);Sleep( 150);
    Beep(500,100);Sleep( 100);
    Beep(570,100);Sleep( 420);
    Beep(585,100);Sleep( 450);
    Beep(550,100);Sleep( 420);
    Beep(500,100);Sleep( 360);
    Beep(380,100);Sleep( 300);
    Beep(500,100);Sleep( 300);
    Beep(500,100);Sleep( 150);
    Beep(500,100);Sleep( 300);
    Beep(500,60);Sleep( 150);
    Beep(500,80);Sleep( 300);
    Beep(500,60);Sleep( 350);
    Beep(500,80);Sleep( 150);
    Beep(580,80);Sleep( 350);
    Beep(660,80);Sleep( 150);
    Beep(500,80);Sleep( 300);
    Beep(430,80);Sleep( 150);
    Beep(380,80);Sleep( 600);
    Beep(500,60);Sleep( 150);
    Beep(500,80);Sleep( 300);
    Beep(500,60);Sleep( 350);
    Beep(500,80);Sleep( 150);
    Beep(580,80);Sleep( 150);
    Beep(660,80);Sleep( 550);
    Beep(870,80);Sleep( 325);
    Beep(760,80);Sleep( 600);
    Beep(500,60);Sleep( 150);
    Beep(500,80);Sleep( 300);
    Beep(500,60);Sleep( 350);
    Beep(500,80);Sleep( 150);
    Beep(580,80);Sleep( 350);
    Beep(660,80);Sleep( 150);
    Beep(500,80);Sleep( 300);
    Beep(430,80);Sleep( 150);
    Beep(380,80);Sleep( 600);
    Beep(660,100);Sleep( 150);
    Beep(660,100);Sleep( 300);
    Beep(660,100);Sleep( 300);
    Beep(510,100);Sleep( 100);
    Beep(660,100);Sleep( 300);
    Beep(770,100);Sleep( 550);
    Beep(380,100);Sleep( 575);   
}