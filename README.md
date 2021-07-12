# SNMPSniper 🌙

Speedy C++ SNMP Scanner [IN PROGRESS]

SNMPSniper is based on onesixtyone (https://github.com/trailofbits/onesixtyone), i can say that i learned a lot by looking at their code.
If you want to learn how to interact with SNMP using C i would go read their code since it's much simpler than the one here.

I redesigned most of it using the OOP of C++, but there is still a lot of similarities, in what the functions actually does.


USAGE: **snmpscan** [OPTIONS] <host> <community><br>
  -h <host> IPv4 or Netmask to scan<br>
  -o <outputdirectory> save scan output<br>
  -f <fileinput> list of targets<br>
  -p <port> target snmp port<br>
  -v  verbose mode<br>
  -c <communityname> (public or private)<br>
  -? print this help menu<br>
default community names are : public, private<br>
default port : 161<br>
\n
examples : snmpscan 192.168.1.23/24 private<br>
           snmpscan 192.168.1.23/24 public -o snmpoutput.txts<br>
           snmpscan 192.168.1.23/24 public -f snmptargets.txt -o snmpoutput.txt<br>
