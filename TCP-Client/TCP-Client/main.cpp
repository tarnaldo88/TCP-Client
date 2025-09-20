#include "tcp.h"

void main()
{
	std::string ipAddress = "127.0.0.1";
	int port = 54000;	

	//initialize winsock
	WSADATA data;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &data);

	if (wsResult != 0)
	{
		std::cerr << "Can't start winsock, Err #" << wsResult << std::endl;
		return;
	}

	//create the socket
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

	if (sock == INVALID_SOCKET)
	{
		std::cerr << "cannot create socket, Err #" << WSAGetLastError() << std::endl;
	}

	//fill hint structure
	sockaddr_in hint;
	 
	//connect to serv
	// do-while to receive and send data
	//gracefully close down
}