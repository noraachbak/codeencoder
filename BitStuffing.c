#include<stdio.h>
#include <string.h>

void encoder(char frame[80] ){
	
int i=0,count=0;
for(i=0; i<strlen(frame); i++)
 {  //si on a valeur 1
    if(frame[i]=='1')
    //On incrémente la valeur de count
        count++;
    else
        count=0;
    printf("%c",frame[i]);
    //Si on a 5 bits de même valeur
    if(count==5) 
    {//On ajoute un bit de valeur opposé
        printf("0");
        count=0;
    }
 }	
}



int main(int argc,char *argv[])
{

 int i=0,count=0;
 char databits[80];

 printf("Enter Data Bits: ");
 scanf("%s",databits);
 printf("Data Bits Before Bit Stuffing:%s",databits);
 printf("\nData Bits After Bit stuffing :");
 encoder(databits);

}
