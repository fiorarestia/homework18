#include<stdio.h> 

#include<string.h> 

int main()

{

    char q[20]; 

    int a,z[256]={0}; 

	printf("              ��C�ӼƦr�X�{������               \n");

	printf("-------------------------------------------------\n");    

    printf("��J�@�ӳs���ơG");  

    scanf("%s",q);  

    for(a=0;a<strlen(q);a++) 

        z[(int)q[a]]++; 

    for(a=0;a<256;a++) 

        if(z[a]!=0)

            printf("�r��%c�X�{%d��\n",(char)a,z[a]);

}
