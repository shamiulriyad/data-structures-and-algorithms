#include<stdio.h>
#include<string.h>

int main()
{
/*

    FILE *fptr;
    fptr = fopen("file.txt","w");
    if(fptr ==NULL){
        printf("Not open to the file.");
    }
    else{
        printf("file is open");
    }
    fclose(fptr);
 */
/*


    
    FILE *fptr;
    char name[20] = "shamiul islam riyad";
    int length = strlen(name);

    fptr = fopen("file.txt","w");
    if(fptr ==NULL){
        printf("Not open to the file.");
    }
    else{
        printf("file is open\n");
        for(int i=0; i<length;i++){
            fputc(name[i],fptr);
        }
        printf("file is written successfully");

    }

    fclose(fptr);
*/
/*


    FILE *fptr;
    char name[30];
    fptr = fopen("file.txt","w");
    if(fptr == NULL){
        printf("file does not exit");
    }
    else{
        printf("file is exit");
        printf("enter your name :  ");
        gets(name);
        fputs(name ,fptr);
        fputs("\n", fptr);
        printf("file is closed");

    }
    fclose(fptr);
*/

/*
    FILE *fptr;
    char name[30];
    int age;
    fptr = fopen("file.txt","w");
    if(fptr == NULL){
        printf("file does not exit");
    }
    else{
        printf("file open successfully\n");
        printf("enter the name : ");
        gets(name);
        printf("\n",fptr);
        printf("enter the age ");
        scanf("%d",&age);
        fprintf(fptr,"%s %d", name,age);
        printf("the file create successfully");
    }
    fclose(fptr);
*/

/* 

FILE *fptr;
char ch;
fptr =fopen("file.txt","r");
if(fptr == NULL){
    printf("file does not exit");

}
else{
    printf("file create successfully\n");
    while(!feof(fptr)){
        ch = fgetc(fptr);
        printf("%c",ch);
    }
}

fclose(fptr);

*/
/*


FILE *fptr;
char ch[40];
fptr = fopen("file.txt","r");
if(fptr==NULL){
    printf("file does not open successfully\n");
}
else{
    printf("file create successfully\n");
    while(!feof(fptr)){
        fgets(ch,5,fptr);
        printf("%s\n",ch);
    }
    
}
fclose(fptr);
*/
/*

FILE *fptr;
char fname[20];
char lname[20];
fptr = fopen("file.txt","r");
if(fptr==NULL){
    printf("file does not exit");
}
else{
    printf("file create successfuly\n");
    //fscanf syntext("filepointr, formetspacefire,variable name")
    fscanf(fptr,"%s %s",&fname,lname);
    printf("%s %s\n",fname,lname);
}
fclose(fptr);
*/
/*


FILE *fptr;
char name[30];
int age;
int phone_number;
int num;
fptr = fopen("student.txt","a");
if(fptr==NULL){
    printf("file does not exit");
}
else{
    printf("file create successfully\n");
    printf("how many number of student you want :");
    scanf("%d",&num);
    for(int i=1; i<=num;i++){
        printf("enter student name :");
        scanf("%s",&name);
        printf("enter the age : ");
        scanf("%d",&age);
        printf("enter the phone number : ");
        scanf("%d",&phone_number);
        fprintf(fptr,"\n %s\t\t%d\t\t%d\n",name,age,phone_number);
    }
   
    printf("file create successfully\n");

}
fclose(fptr);
 */   

}

