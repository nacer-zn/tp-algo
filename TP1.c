#include<stdio.h>
int main (){
   int i,j;
   char t[5][5]={{'1','2','3','4','5'},
		 {'7','a','c','8','d'},
		 {'c','9','4','z','8'},
		 {'5','6','p','n','3'},
		 {'2','9','t','m','k'}
		 };
   	printf("la matrice  est: \n"); //the matrix that the user inserted
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%c",t[i][j]);
		};
		printf("\n");
	};
	//the matrix that shows the lines with even numbers
	printf("\n"); 
	for(i=0;i<5;i+=2){ 
		for(j=0;j<5;j+=2){
			printf("%c",t[i][j]);
		};
		printf("\n");
	};
	//the matrix that shows the left diagnonale 
	printf("\n");
	for(i=0;i<5;i++){
		printf("%c",t[i][i]);
	};
	//the matrix that shows the right diagnonale
	printf("\n");
	for(i=0;i<5;i++){
		printf("%c",t[i][4-i]);
	}

        int k;
	printf("\n");
 	for(i=0;i<5;i++){
		for(j=0;j<i;j++){
			k=t[i][j];
			t[i][j]=t[j][i];
			t[j][i]=k;
		}
	}
  	printf("\n");
        for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%c",t[i][j]);
		};
		printf("\n");
	};



}
