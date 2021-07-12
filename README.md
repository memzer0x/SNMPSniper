# SNMPSniper 🌙

Speedy C++ SNMP Scanner [IN PROGRESS]

SNMPSniper is based on onesixtyone (https://github.com/trailofbits/onesixtyone), i can say that i learned a lot by looking at their code.
If you want to learn how to interact with SNMP using C i would go read their code since it's much simpler than the one here.

I redesigned most of it using the OOP of C++, but there is still a lot of similarities, in what the functions actually does.

## Usage
```
USAGE: SNMPSniper [OPTIONS] <host> <community>
       -h <host> IPv4 or Netmask to scan
       -o <outputdirectory> save scan output
       -f <fileinput> list of targets
       -p <port> target snmp port
       -v  verbose mode
       -c <communityname> (public or private)
       -? print this help menu
default community names are : public, private
default port : 161

examples : snmpscan 192.168.1.23/24 private
           snmpscan 192.168.1.23/24 public -o snmpoutput.txts
           snmpscan 192.168.1.23/24 public -f snmptargets.txt -o snmpoutput.txt
```
