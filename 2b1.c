#include<stdio.h>
#include<string.h>


char b[100][200]={"else","while","for","int","float","char","return"};

int issign(char a){

if(a=='>' || a=='<' || a=='}' || a=='{' || a=='+' || a=='-' || a==';'||a=='('|| a==')'|| a=='=')
return 1;
else return 0;



}


int identity(char a[]){
int i=0;
while(a[i]!='\0'){
 if(!((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z') || a[i]=='_')){
   return 0;
 }
 i++;
}

return 1;


}



int keyword(char a[]){


for(int i=0;i<7;i++)
{

int j=0;
int match=1;

while(a[j]!='\0' || b[i][j]!='\0')

{

 if(a[j]!=b[i][j]){
    match=0;
    break;
 }


 j++;



}


if(match==1 && a[j]=='\0'&& b[i][j]=='\0'){
    return 1;
}




}

return 0;
}


int main(){

char rahad[1000],test[1000][1000];

scanf("%[^$]",rahad);

int i=0;
int j=0;
int k=0;
while(rahad[i]!='\0'){


if(rahad[i]==32 || rahad[i]=='\n' || issign(rahad[i])==1){
    i++;
    continue;
}

else{
   while(rahad[i]!='\0')
{

if(rahad[i]==32 || rahad[i]=='\n' || issign(rahad[i])==1){
    
    break;
}
else

test[j][k++]=rahad[i++];


}




}

test[j][k]='\0';
j++;
k=0;


}


for(int i=0;i<j;i++){



    if(keyword(test[i])){
        printf("%s : keywword\n",test[i]);
    }
   else  if(identity(test[i])==1){
        printf("%s : identifier\n",test[i]);
    }


  
else 
        printf("%s : not\n",test[i]);
    }







}
