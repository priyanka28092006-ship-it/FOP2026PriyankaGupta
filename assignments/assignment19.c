#include <stdio.h>
//storing employee details
int main(){
int no;
printf("enter no. of employees for detail/n");
scanf("%d",&no);
//entering details
    struct emp st[no];
    for(inti=1;i<=no;i++){
        printf("Enter name of employee\n");
        scanf("%s",st[i].emp_name);
        printf("Enter designation of employee\n");
        scanf("%s",st[i].emp_designation);
        printf("Enter name of gender\n");
        scanf("%s",st[i].emp_gender);
        printf("Enter date of join\n");
        scanf("%s",st[i].emp_dateofjoin);
        printf("Enter salary");
        scanf("%f",&st[i].salary);




    }

    



}
struct emp{
char emp_name[50];
char emp_designation[50];
char emp_gender[20];
int emp_dateofjoin;
float salary;
}
