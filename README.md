# minitalk

A project from the 42 curriculum. The goal of this project is to create a small data exchange program using UNIX signals. It consists of a server and a client that communicate with each other.

## About the implementation

This implementation relies on UNIX signals, specifically `SIGUSR1` and `SIGUSR2`, to transmit strings of characters from the client to the server. 

* The client converts each character of the message into its binary representation (8 bits).
* It sends these bits sequentially to the server's process ID, using `SIGUSR1` to represent a `1` and `SIGUSR2` to represent a `0`.
* The server receives the signals, reconstructs the characters bit by bit, and prints the final message to the standard output.

## Compilation and Usage

### 1. Compilation

To compile the project, run the `make` command in the root directory of the repository. This will generate two executables: `server` and `client`.

```bash
make
```

### 2. Usage

First, start the server. It will print its Process ID (PID) upon startup, which is required by the client to establish communication.

```bash
./server
```

In a second terminal window, run the client. Pass the server's PID as the first argument and the message you want to send as the second argument.

```bash
./client <PID> "Your message here"
```

Example:
```bash
./client 12345 "Hello from the client!"
```

If the arguments are incorrect, the client will output an `Error` message.

## Structure

* `client.c` - Contains the logic to parse the PID and message, convert the message characters into binary signals, and send them to the server.
* `server.c` - Contains the signal handling logic to catch incoming bits, reconstruct the characters, and display the output.

## Author

* **joschmun** - *42 Student*