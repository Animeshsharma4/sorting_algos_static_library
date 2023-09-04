#include<stdio.h>
#include<time.h>

void timetaken(void(*process)(int* n1,int n2),int* n1,int n2){
   clock_t start,end;
   double cpu_time_used;

   start=clock();
   process(n1,n2);
   end=clock();
   cpu_time_used=(((double)(end-start))/CLOCKS_PER_SEC)*1000;
   printf("time taken by process: %f seconds\n",cpu_time_used);



}

