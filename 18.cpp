#include<stdio.h> 

#include<string.h> 

int main()

{

    char q[20]; 

    int a,z[256]={0}; 

	printf("              衡–计瞷Ω计               \n");

	printf("-------------------------------------------------\n");    

    printf("块硈﹃俱计");  

    scanf("%s",q);  

    for(a=0;a<strlen(q);a++) 

        z[(int)q[a]]++; 

    for(a=0;a<256;a++) 

        if(z[a]!=0)

            printf("才%c瞷%dΩ\n",(char)a,z[a]);

}
