#include<stdio.h>
#include<windows.h>
int main(){               
    int h,m,s;
    int d=1000;
    printf("Set the time: \n");
    scanf("%d%d%d",&h,&m,&s);
    if (h>24 || m>60 || s>60){
        printf("Error!!");
        printf("\nYou set worng Time\n");
        return 0;
    }
    while(1){
        s++;
        if (s>59){
            m++;
            s=0;
        }
        if (m>59){
            h++;
            m=0;
        }
        if (h>24){
            h=1;
        }
        printf("\n Clock Time: ");
        if (h<=11 && m<=59 && s<=59)
        printf("\n %02d:%02d:%02d AM",h,m,s);
        else 
        printf("\n %02d:%02d:%02d PM",h,m,s);
        Sleep(d);
        system("cls");
    }
    
}