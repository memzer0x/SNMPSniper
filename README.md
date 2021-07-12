# SNMPSniper 🌙

Speedy C++ SNMP Scanner [IN PROGRESS]

SNMPSniper is based on onesixtyone (https://github.com/trailofbits/onesixtyone), i can say that i learned a lot by looking at their code.
If you want to learn how to interact with SNMP using C i would go read their code since it's much simpler than the one here.

I redesigned most of it using the OOP of C++, but there is still a lot of similarities, in what the functions actually does.


USAGE: **snmpscan** [OPTIONS] <host> <community>\n
  -h <host> IPv4 or Netmask to scan\n
  -o <outputdirectory> save scan output\n
  -f <fileinput> list of targets\n
  -p <port> target snmp port\n
  -v  verbose mode\n
  -c <communityname> (public or private)\n
  -? print this help menu\n
default community names are : public, private\n
default port : 161\n
\n
examples : snmpscan 192.168.1.23/24 private\n
           snmpscan 192.168.1.23/24 public -o snmpoutput.txts\n
           snmpscan 192.168.1.23/24 public -f snmptargets.txt -o snmpoutput.txt\n
