#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *ChargerChaine(int N){
//malloc alocate a mimory that has the N+1 size of char  
char *charchar = (char*)malloc((N  ) * sizeof(char)); 
printf("give me a word with %d letters: ",N);    
    scanf("%s", charchar);
if(strlen(charchar)>N){
printf("the charachter is too big ");
}else{
return charchar;
}}
void InverserTab(char Tab[], char T[], int m){
/*
a for loop from 1 to m for putting the first table in an other table while revercing it 
putting the i order element in the m-i-1 order 
*/
for (int i = 0; i < m; i++) {
T[i] = Tab[m-i-1];
}
}
void ChargerTab(char *p, char Tab[]){
for(int i=0;i<strlen(p);i++)
Tab[i]=p[i];
}
int Longueur(char *ch){
    int length = 0;
    while (ch[length] != '\0') {
        length++;
    }
    return length;
}
void AfficherTab(char Tab[], int m){
//a loop form 1 to i for printing the table 
for (int i = 0; i < m; i++) {
printf("%c", Tab[i]);	   
}
printf("\n");
}
int main(){
char *ch;
int n;
printf("insert the max number elements of the table:");
scanf("%d",&n); 
ch=ChargerChaine(n);
int m=Longueur(ch);
char Tab[m], T[m];
ChargerTab(ch,Tab);
AfficherTab(ch,m);
InverserTab(Tab,T,m);
AfficherTab(T,m);
free(ch);
}
