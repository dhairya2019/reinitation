#include<iostream>
#include<bits/stdc++.h>
using namespace std;
char * strtok(char *str, char delim){
    static char* input = NULL;
    int i=0;
    if(str!=NULL){
        input = str;
    }
    
    
    if(input == NULL)
    return NULL;
    
    char *output = new char[strlen(input)+1];
    for(;input[i]!='\0';i++){
        if(input[i]!=delim){
            output[i]=input[i];
        }
        else{
            output[i]='\0';
            input = input +i+1;
            return output;
        }
    }
    
    output[i] = '\0';
    input=NULL;
    return output;
}


int main()
{
 //How to tokenize your string
 char s[100]= "Today, is a, rainy day";

 
 char *ptr = strtok(s,",");
 cout<<ptr<<endl;
 
 while(ptr != NULL){
 ptr = strtok(NULL,",");
 cout<<ptr<<endl;
 }
 
 return 0;
}
