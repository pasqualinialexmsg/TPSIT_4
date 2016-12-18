/*****************************************************************
Alunno:Pasqualini Alex
Classe: 4 INA
Data: 14/12/2016
******************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<time.h>
int b,h;
void *area(void *arg){
     int a;
     a=b*h;
     printf("\n L'area e': \n %d", a);
     return NULL;
}

void *perimetro(void *arg){
     int p;
     p=(b+h)*2;
     printf("\n Il perimetro e': \n %d", p);
     return NULL;
     }
     
int main(void){
    pthread_t tid1;
    pthread_t tid2;
    printf("\n Inserisci base: \n");
    scanf("%d", &b);
    printf("\n Inserisci altezza: \n");
    scanf("%d", &h);
    pthread_create(&tid1, NULL, &area, NULL);
    pthread_create(&tid2, NULL, &perimetro, NULL);
    
    sleep(5);
    return 0;
}
