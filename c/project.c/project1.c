#include<stdio.h>
#include<string.h>
typedef struct verify{
    long account;
    char ifsc[100];
    

} verify;
 


typedef struct information{
    verify a;
    char user[100];
    long balance;
    char bankname[100];
    verify b;
} info;
info i1;


info input(){
    char c;
    long balance2=0,balance3=0;

    

printf("enter your account no in integer");
scanf("%ld",&i1.a.account);

getchar();



puts("enter your ifsc code");
fgets(i1.a.ifsc,100,stdin);



printf("enter your user name");
fgets(i1.user,100,stdin);

printf("enter your balance");
scanf("%ld",&i1.balance);

getchar();

printf("enter your bank name");

fgets(i1.bankname,100,stdin);

printf("for verify");

printf("enter your account no in integer");

scanf("%ld",&i1.b.account);
getchar();

puts("enter your ifsc code");
fgets(i1.b.ifsc,100,stdin);

 





if(i1.a.account==i1.b.account&&strcmp(i1.a.ifsc,i1.b.ifsc)==0){
    printf("A=balance check,B=deposit,C=withdraw,D=exit");
    scanf(" %c",&c);
    switch(c){
    
        case 'A':
        printf(" balance=%ld\n",i1.balance);
        break;
        case 'B':
        printf("enter balance you want to deposite");
          scanf("%ld",&balance2);
            i1.balance+=balance2;
        printf("new balance=%ld\n",i1.balance);
        break;
        case 'C':
        printf("enter your balance you want to withdraw");
     scanf("%ld",&balance3);
     if(i1.balance>=balance3){
     i1.balance-=balance3;
     printf(" THE AMOUNT LEFT %ld",i1.balance);
     
     }
     else{
        printf("insufficient balance");
     }
      break;
      case 'D':
      printf("THANKYOU FOR COMING");
      break;
    }
}


return i1;

}

void print(info i1){
printf("output=");

if(i1.a.account==i1.b.account&&strcmp(i1.a.ifsc, i1.b.ifsc) == 0){
    printf("\nAccount Number: %ld\n", i1.a.account);

    printf("IFSC Code: %s", i1.a.ifsc);

    printf("Username: %s", i1.user);

    printf("Balance: %ld\n", i1.balance);

    printf("Bank Name: %s", i1.bankname);

    
}
else{
    printf("\nAccount Number: %ld\n", i1.a.account);

    printf("IFSC Code: %s", i1.a.ifsc);

        printf("\nAccount Number: %ld\n", i1.b.account);

    printf("IFSC Code: %s", i1.b.ifsc);

   printf("please ! enter correct account no and ifsc code\n");
}
    }
    int main(){
        i1=input();
        print(i1);
    }
   



