#include<stdio.h>
#include<string.h>
typedef struct{
    char UserName[10];
    char UserID;
    char Age;
}PERSONAL_INFO;

int main(void){
    
    PERSONAL_INFO PersonnelA;
    PERSONAL_INFO PersonnelB[2];
    PERSONAL_INFO *MyRecord;
    char *Pointer;
    int i;

    sprintf(PersonnelA.UserName, "%s", "Jackson");
    PersonnelA.UserID = 10;
    PersonnelA.Age = 40;

    sprintf(PersonnelB[0].UserName, "%s", "David");
    PersonnelB[0].UserID = 11;
    PersonnelB[0].Age = 35;

    sprintf(PersonnelB[1].UserName, "%s", "Smith");
    PersonnelB[1].UserID = 12;
    PersonnelB[1].Age = 28;

    if(0){
        Pointer = (char *)&PersonnelA;
        //*(Pointer+10) = PersonnelA.UserID
        //*(Pointer+11) = PersonnelA.Age
        printf("PersonnelA.UserName(%p)= %c\t%x\n", &PersonnelA.UserName, PersonnelA.UserName[0], PersonnelA.UserName[0]);
        printf("PersonnelA.UserID(%p)= %c\t%x\n", &PersonnelA.UserID, PersonnelA.UserID, PersonnelA.UserID);
        printf("PersonnelA.Age(%p)= %c\t%x\n", &PersonnelA.Age, PersonnelA.Age, PersonnelA.Age);
        for(i = 0; i<12; i++)
            printf("Ans1_%d (%p) = %c\t%x\n", i, Pointer+i, *(Pointer+i), *(Pointer+i));
    }

    if(0){
        Pointer = (char *)&PersonnelB[1];
        for(i = 0; i<12; i++)
            printf("Ans2_%d (%p) = %s\n", i, Pointer+i, Pointer+i); // = printf("Ans2 = %s\n", &Pointer[1]);
    }

    if(1){
        MyRecord = PersonnelB;
        MyRecord++;
        printf("Ans3 d = %d\n", MyRecord->Age);
        printf("Ans3 o = %o\n", MyRecord->Age);
        printf("Ans3 x = %x\n", MyRecord->Age);
        printf("Ans3 u = %u\n", MyRecord->Age);
        printf("Ans3 c = %c\n", MyRecord->Age);
    }
    return 0;
}