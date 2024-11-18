#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *ChargerChaine(int N){
char *charchar = malloc(N * sizeof(char));
return charchar;
}
//char Longueur(char *ch)
void InverserTab(char Tab[], char T[], int m){
for (int i = 0; i < m; i++) {
T[i] = Tab[m-i-1];
}
}
void ChargerTab(char *p, char Tab[]){

}
void AfficherTab(char Tab[], int m){
for (int i = 0; i < m; i++) {
printf("%c", Tab[i]);	   
}
}
int main(){
char *ch;
int n;
printf("insert the max number elements of the table:");
scanf("%d",&n); 
ch=ChargerChaine(n);
//int m=Longueur(ch);
// char Tab[m], T[m];
//ChargerTab(ch,Tab);
int m=4;
AfficherTab(ch,m);
//InverserTab(Tab,T,m);
//AfficherTab(T,m);
//free(ch);
 }
