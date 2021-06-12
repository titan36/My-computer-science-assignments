#!/usr/bin/python
#!/usr/bin/python
import socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
hos = raw_input("[*] Enter the host to scan: ")
#for static
#hos = 127.0.0.1
#port = 80
#port = int(raw_input("[*] Enter the port to scan: "))

def portscanner(port):
    if sock.connect_ex((hos,port)):
        print "Port %d is closed" % (port)
    else:
        print "Port %d is opened" % (port)
port = 1
while port <= 3400:
    portscanner(port)
    port = port + 1
