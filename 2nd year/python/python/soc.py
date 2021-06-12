#!/usr/bin/python
import socket
from termcolor import colored
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
hos = raw_input("[*] Enter the host to scan: ")
#for static
#hos = 127.0.0.1
#port = 80
#port = int(raw_input("[*] Enter the port to scan: "))

def portscanner(port):
    if sock.connect_ex((hos,port)):
        print (colored("Port %d is closed" % (port), 'red'))
    else:
        print (colored("Port %d is opened" % (port),  'green'))
port = 1
while port <= 4000:
    portscanner(port)
    port = port + 1
