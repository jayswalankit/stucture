#include <Stdio.h>
#include <string.h>
typedef struct userinfo
{
    char bankname[15];
    long long accountnumber;
    char ifsccode[15];
} u;

u input()

{
    u s1;
    printf("enter ur bank name:");
    fgets(s1.bankname, 15, stdin);
    s1.bankname[strcspn(s1.bankname, "\n")] = 0;

    printf("enter ur account number:");
    scanf("%lld", &s1.accountnumber);
    getchar();

    printf("enter ur ifsc code:");
    fgets(s1.ifsccode, 15, stdin);
    s1.ifsccode[strcspn(s1.ifsccode, "\n")] = 0;
    return s1;
}
void verification(u s1)
{
    char bankname[] = "sbi";
    char ifsccode[] = "sbin0009698";
    int atmpin =1234;
    long long accountnumber = 123456789;
    int user,moneydepo,summoney=0;
    if (strcmp(s1.bankname, bankname) == 0 && s1.accountnumber == accountnumber && strcmp(s1.ifsccode, ifsccode) == 0)
    {
        printf("verfication succesful\n");

        printf("1 --> balance check:\n");
        printf("2 -->   deposit\n");
        printf("3 -->   withdrawl\n");
        printf("4 -->   pinchange:");

        scanf("%d", &user);
        if (user == 1)
        {
            printf("");
        }
        else if (user == 2)
        {
            printf("how much u want to deposit:\n");
            printf("Notes that excepted are\n rs 500 \n rs 1000 \n rs 2000\n");
            printf("note -: minium ammount acceptance is 2000 \n");
            scanf("%d",&moneydepo);
            if(moneydepo == 500 || moneydepo == 1000 || moneydepo ==2000){
                    summoney+=moneydepo;
                    if(summoney<=2000){
                        printf("money rejected take it back sir%d ",moneydepo -summoney);
                    }
            }
        }
    }
    else
    {
        printf("wrong\n");
    }
}

void print(u s1)
{
    printf("%s", s1.bankname);
    printf("%lld", s1.accountnumber);
    printf("%s\n", s1.ifsccode);
}
int main()
{
    int user;
    u userinfo;
    int isverified = 0;
    printf("enter what u want to do :\n");
    printf("1 --> Banking:\n");
    printf("2 --> balance info:");

    scanf("%d", &user);
    getchar();
    if (user == 1)
    {

        userinfo = input();
        verification(userinfo);
        isverified = 1;
    }
    else if (user == 2)
    {
        if (isverified == 1)
        {
            print(userinfo);
        }
        else
        {
            printf("no data found:\n");
 }
}
}