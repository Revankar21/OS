#include<pthread.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
#include<math.h>
#include<stdio.h>


int a[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};


int i;
void * print(void *i)
{
 int * j = (int *) i;
 int m , sum=0;
 printf("i am thread %d\n",*j);
 for (int m = 0;m<3;m++)
 {
  sum=sum+a[*j][m];
 }
 printf("the sum :%d \n",sum);
}




int main ()
{
pthread_t  tid[3];
for (int i =0 ; i<3;i++)
{
pthread_create(&tid[i],NULL,print,(void * )&i);
sleep(1);
}

for(int i=0;i<3;i++)
{
pthread_join(tid[i],NULL);
}
return 1;
}
