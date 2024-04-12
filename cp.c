#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/types.h>
#include<unistd.h>

#define buffersize 8012
int main(int argc,char * argv[])
{
int input_fd, output_fd,red_in;
//ssize_t red_in ,red_out;
char buffer[buffersize];

if(argc!=3){
printf("the arguement is not suffierent");
}

input_fd=open(argv[1], O_RDONLY);
if (input_fd==-1)
{
perror("input erroe in file 1");
}



output_fd=open(argv[2], O_WRONLY | O_CREAT,0666);
if (output_fd==-1)
{
perror("input erroe in file 1");
}


while ((red_in=read(input_fd,buffer, buffersize))>0)
{
write(output_fd,buffer,red_in);
 
if (red_in == -1)
{
perror("write error");
}
}

close(input_fd);
close(output_fd);

}
