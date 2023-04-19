#include <stdio.h>
#include <string.h>
#define MAX_PERSONAGENS 5 //

struct Personagem{
    char nome[50];};
    
void bubbleSort(struct Personagem personagens[], int n){
    int i, j;
    
    struct Personagem temp;
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(strcmp(personagens[j].nome,personagens[j+1].nome)>0){
                temp = personagens[j];
                personagens[j]=
                personagens[j+1];
                personagens[j+1]=temp;
            }
        }
    }
}

int main() {
    struct Personagem personagens[MAX_PERSONAGENS] = {
        {"Barbaro"}, {"Mago"}, {"Rogue"}, {"Paladin"}, {"Fighter"} };
        bubbleSort (personagens, MAX_PERSONAGENS); 
        for (int i = 0; i < MAX_PERSONAGENS; i++){
            printf("%s\n", personagens[i].nome);  }
            return 0;}
