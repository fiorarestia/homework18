#include<stdio.h> 

#include<string.h> 

int main()

{

    char q[20]; 

    int a,z[256]={0}; 

	printf("              算每個數字出現的次數               \n");

	printf("-------------------------------------------------\n");    

    printf("輸入一個連串整數：");  

    scanf("%s",q);  

    for(a=0;a<strlen(q);a++) 

        z[(int)q[a]]++; 

    for(a=0;a<256;a++) 

        if(z[a]!=0)

            printf("字符%c出現%d次\n",(char)a,z[a]);

}
