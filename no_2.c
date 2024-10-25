#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
char pesan[10001];
int checksum=0;
do{
    scanf(" %[^\n]*c", pesan);
    for(int i=0; pesan[i]!='\0'; i++){
        checksum+= (int) pesan[i];
    }
    if(strcmp(pesan, ".") != 0){//ini titik dari inputnya dihitung
    checksum = (checksum%64)+32;
    printf("%c\n", checksum);
    checksum=0;
    }
} while (strcmp(pesan, ".") != 0);
return 0;
}