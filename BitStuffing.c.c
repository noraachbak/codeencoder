#include<stdio.h>
#include <string.h>

void encoder(char frame[80] ){
	
	int i=0,count=0;
for(i=0; i<strlen(frame); i++)
 {
    if(frame[i]=='1')
        count++;
    else
        count=0;
    printf("%c",frame[i]);
    if(count==5)
    {
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
