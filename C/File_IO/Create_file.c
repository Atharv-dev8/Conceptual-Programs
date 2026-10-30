#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
    int fd=0;

    fd = creat("Demo.txt",0777);

    if (fd == -1)
    {
        printf("unable to create file \n");
        return -1;
    }
    else
    {
        printf("file get created with fd : %d\n",fd);
    }
    return 0;
    
}