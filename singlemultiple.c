#include<stdio.h>

#include<string.h>


int main(){


char rahad[1000];
char test[1000];
scanf("%[^$]",rahad);

int k=0;

int i=0;
int scount=1;int mcount=1;

while(rahad[i]!='\0'){


 if(rahad[i]=='/' && rahad[i+1]=='/'){

   // printf("single line comment  %d :",scount++);
    i=i+2;
    while(rahad[i]!='\n' && rahad[i]!='\0'){
       // printf("%c",rahad[i]);
        i++;
    }
   
 }  
 




 



 else if(rahad[i]=='/' && rahad[i+1]=='*'){

//printf("multiple line comment  %d :",mcount++);
    i=i+2;
    while(rahad[i]!='\0' && !(rahad[i]=='*' && rahad[i+1]=='/')){
       // printf("%c",rahad[i]);
        i++;
    }
    i=i+2;
    
 }  
 else{
 test[k++]=rahad[i++];
 }

}

test[k]='\0';








printf("you clean code : %s",test);








}


















