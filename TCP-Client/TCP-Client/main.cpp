#include "tcp.h"

void main()
{
	std::string ipAddress = "127.0.0.1";
	int port = 54000;	

	//initialize winsock
	WSADATA data;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &data);

	//create the socket
	//fill hint structure
	//connect to serv
	// do-while to receive and send data
	//gracefully close down
}