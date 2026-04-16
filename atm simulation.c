#include<stdio.h>
#include<string.h>
int main()
{
    int a, i, pin1, pin2, pin3, pin4, pin5, pin6, amt, b, c, d, e, f, g, h, q, j, k, l, m, n;
    char name1[20];
    char name2[20]="piyush";
    char name3[20]="om";
    char name4[20]="saniket";
    char name5[20]="diksha";
    char name6[20]="aarya";
    pin2=2026;
    pin3=6969;
    pin4=1584;
    pin5=7391;
    pin6=2312;
    
    for(i=1;i<=3;i++){
    printf("Enter your username: ");
    scanf("%s",name1);
    
    
    if((strcmp(name1,name2)==0 ||
    strcmp(name1,name3)==0 ||
    strcmp(name1,name4)==0 ||
    strcmp(name1,name5)==0 ||
    strcmp(name1,name6)==0 )){
        printf("valid username\n\n");
        break;
        
    }
    else{
        printf("invalid username\n");
        
        if(i<3){
               printf("please try again\n\n ");
        continue;
    } 
    }
    }
      if(i>3){
        printf("\ntoo many attempt!!!\n");
        printf("\nplease try again later");
        return 0;
    }
    
    
    for(a=1;a<=3;a++){
        printf("enter pin: ");
        scanf("%d",&pin1);
        
    if((strcmp(name1,name2)==0 && pin1==pin2 ||
    strcmp(name1,name3)==0 && pin1==pin3 ||
    strcmp(name1,name4)==0 && pin1==pin4 ||
    strcmp(name1,name5)==0 && pin1==pin5 ||
    strcmp(name1,name6)==0 && pin1==pin6)){
        printf("valid pin\n\n");
        printf("Enter amount: ");
        
        break;
        
    }
    else{
         printf("invalid pin\n ");
         
         
    if(a<3){
         printf("please try again\n\n ");
        continue;   
    }
    }
    }
    if(a>3){
        printf("too many attempt!!!\n");
        printf("please try later");
        
    
    
    
    
    return 0;
    
    
    
}
     
     scanf("%d",&amt);  
b=amt/1000;  
c=amt%1000;  
printf("total 1000\u20B9 notes : %d",b);  
d=c/500;  
e=c%500;  
printf("\ntotal 500\u20B9 notes: %d",d);  
f=e/100;  
g=e%100;  
printf("\ntotal 100\u20B9 notes : %d",f);  
h=g/20;  
q=g%20;  
printf("\ntotal 20\u20B9 notes : %d",h);  
j=q/10;  
k=q%10;  
printf("\ntotal 10\u20B9 notes: %d",j);  
l=k/2;  
m=k%2;  
printf("\ntotal 2\u20B9 coins : %d",l);  
n=m/1;  
printf("\ntotal 1\u20B9 coins : %d",n);  
return 0;

}
