# TCP Client

A  TCP client application written in C++ for Windows. This client can connect to any TCP server and exchange messages in real-time.

## Features

- Simple command-line interface for sending and receiving messages
- Configurable server IP address and port
- Error handling for common network issues
- Clean shutdown of network resources
- Cross-platform compatible (Windows-specific implementation)

## Prerequisites

- Windows operating system
- Visual Studio 2019 or later (with C++ workload installed)
- Basic knowledge of TCP/IP networking

## Building the Project

1. Clone or download this repository
2. Open the solution file `TCP-Client.sln` in Visual Studio
3. Select the appropriate build configuration (Debug/Release) and platform (x64)
4. Build the solution (Ctrl+Shift+B)

The compiled executable will be located in the `x64\Debug\` or `x64\Release\` directory.

## Usage

### Basic Usage

1. Run the compiled `TCP-Client.exe` from the command line
2. By default, the client will attempt to connect to `127.0.0.1` on port `54000`
3. Type your message and press Enter to send it to the server
4. The server's response will be displayed below your message
5. To disconnect, press Enter without typing a message

### Command Line Arguments

You can specify the server IP and port when starting the client:

```
TCP-Client.exe [server_ip] [port]
```

Example:
```
TCP-Client.exe 192.168.1.100 8080
```

## Code Structure

- `main.cpp`: Contains the main application logic and user interface
- `tcp.h`: Header file with necessary includes and library links

## Error Handling

The client handles common error conditions including:
- Winsock initialization failures
- Socket creation errors
- Connection failures
- Send/Receive errors

## License

This project is open source and available under the [MIT License](LICENSE).

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## Support

For support, please open an issue in the GitHub repository.

## Acknowledgments

- Windows Sockets 2 (Winsock) API
- Microsoft Visual Studio
