# _*_  coding utf-8   _*_       # Be compatible with chinese utf-8
import socket
target_host = 'www.baidu.com'
target_prot = 80
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect((target_host,target_prot))
client.send("GET / HEEP/\r\nHost: google.com\r\n\