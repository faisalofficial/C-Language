#include<stdio.h>

int main(){
    int numberOfEmployees = 10, overTimeRate = 12, baseTime = 40, houresWorked, incentives;

    for(int i = 0; i<numberOfEmployees; i++){
        printf("\nEnter Number Of Hours worker %d Has Worked : ", i+1);
        scanf("%d", &houresWorked);
        if (houresWorked<=baseTime){
            printf("\nWorker %d Did Not Worked Overtime", i+1);
            continue;
        } else if (houresWorked>baseTime){
            incentives = (houresWorked - baseTime)*overTimeRate;
            printf("\nWorker %d has worked %d hours more than bas time\nAmount of incentives = %d"
            , i+1, (houresWorked- baseTime), incentives);
        }
    }
    return 0;
}