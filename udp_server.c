#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void error_handling(char *message)

#define Buf_Size 1024

int main(int argc, char *argv[])
{
    int server_socket, client_socket;
    char message[Buf_Size];
    int str_len,i;
    struct sockkaddr_in server_addr;
    struct sockaddr_in client_addr;
    socklen_t client_addr_size;

    if(argc != 2)
    {
        printf("Usage: %s <port>\n",argv[0]);
        exit(1);
    }

    
    //server socket creation

    server_socket = socket(AF_INET,SOCK_STREAM,0);
    if(server_sock == -1 )
    {
        perror("Socket creation Failed!");
        memset(&server_addr,0,sizeof(server_addr))
    }
}
