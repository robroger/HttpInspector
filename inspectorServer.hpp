
#include <iostream> 
// Winsock TCP function
#ifndef INSPECTORSERVER_HPP
#define INSPECTORSERVER_HPP

#include <WS2tcpip.h>
#include <string>

#define PORT 8228

// link to Winsock library
#pragma comment (lib, "ws2_32.lib")

class inspectorServer{
private:
    // Inicializa Winsock
    WSADATA wsData;

    SOCKET serverSocket;
    sockaddr_in serverSocketHint;

    SOCKET clientSocket;
    sockaddr_in clientSocketHint;

public:
	// Request* request;
	// Response* response;

	inspectorServer();
	~inspectorServer();

	void init(int PORT);

	void cleanUp();

	void setupListen();
	void acceptConnection();
	void respond(std::string);
	void closeClientSocket();

	void makeRemoteRequest(std::string, std::string);
};



#endif /* INSPECTORSERVER_HPP */

