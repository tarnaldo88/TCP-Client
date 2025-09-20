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
		WSACleanup();
		return;
	}

	//fill hint structure
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);
	 
	//connect to serv
	int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));

	if (connResult == SOCKET_ERROR)
	{
		std::cerr << "cannot connect to server, Err # " << WSAGetLastError() << std::endl;
		closesocket(sock);
		WSACleanup();
		return;
	}
	 
	// do-while to receive and send data
	char buf[4096];
	std::string user_input;

	do 
	{
		//prompt for text
		std::cout << "> ";
		std::getline(std::cin, user_input);

		if (user_input.size() > 0)
		{
			//send text
			int sendResult = send(sock, user_input.c_str(), user_input.size() + 1, 0);
		}		

	} while (user_input.size() > 0);

	//gracefully close down
}