#include "../header/init.h"

void InitProgram::HelpMenu()const noexcept{
    std::cout << "USAGE: snmpscan [OPTIONS] <host> <community>" << std::endl;
    std::cout << "  -h <host> IPv4 or Netmask to scan" << std::endl;
    std::cout << "  -o <outputdirectory> save scan output" << std::endl;
    std::cout << "  -f <fileinput> list of targets" << std::endl;
    std::cout << "  -p <port> target snmp port" << std::endl;
    std::cout << "  -v  verbose mode" << std::endl;
    std::cout << "  -c <communityname> (public or private)" << std::endl;
    std::cout << "  -? print this help menu" << std::endl;
    std::cout << "host is an IPv4 address" << std::endl;
    std::cout << "default community names are : public, private" << std::endl;
    std::cout << "default port : 161" << std::endl;

    std::cout << std::endl << std::endl;
    std::cout << "examples : snmpscan 192.168.1.23/24 private" << std::endl;
    std::cout << "           snmpscan 192.168.1.23/24 public -o snmpoutput.txts" << std::endl;
    std::cout << "           snmpscan 192.168.1.23/24 public -f snmptargets.txt -o snmpoutput.txt" << std::endl;
}

InitProgram::InitProgram(int argc, char* argv[]){
   //Check we have enough arguments to run the program
    if(argc < 2){
        HelpMenu();
        exit(-1);
    }

    ProgramArguments = InitProgram::GetArguments(argc, argv);
    if(ProgramArguments.VERBOSE_MODE){
        std::cout << "Input file \t . . . . . ";
        strlen(ProgramArguments.input_filename.c_str()) > 0 ?
            std::cout << ProgramArguments.input_filename << std::endl :
            std::cout << "NO INPUT FILE GIVEN" << std::endl;
        
        std::cout << "Output File\t . . . . . ";
        strlen(ProgramArguments.output_filename.c_str()) > 0 ?
            std::cout << ProgramArguments.output_filename << std::endl :
            std::cout << "NO OUTPUT FILE GIVEN" << std::endl;
    }
}

InitArguments InitProgram::GetArguments(int argc, char* argv[]){
    InitArguments args;
    int ParsedArg;
    while((ParsedArg = getopt(argc, argv, "?:h:o:f:p:v")) != EOF){
        switch(ParsedArg){
            case 'v': 
                args.VERBOSE_MODE = true;
                break;
            case 'o': 
                std::strncpy((char*)args.output_filename.c_str(), optarg, sizeof(args.output_filename));
                break;
            case 'p': 
                if(std::stol(optarg, NULL, 10) == 0){
                    std::cout << "Error with port : " << args.port << std::endl;
                    exit(-1);
                } else {
                    args.port = std::stol(optarg, NULL, 10);
                    if(args.port < 0 || args.port > 65535){
                        std::cout << "Please choose a valid port ! (1/65535)\nPort choosed : " << args.port << std::endl;
                        exit(-1);
                    }
                }
                break;
            case 'f':
                std::strncpy((char*)args.input_filename.c_str(), optarg, sizeof(args.input_filename));
                break;
            case 'h': 
                std::strncpy((char*)args.target_host.c_str(), optarg, sizeof(args.target_host));
                break;
            case '?':
                HelpMenu();
                break;
        }
    }
    if(!args.input_filename.c_str()){
        if(optind >= argc){
            HelpMenu();
            exit(1);
        }
    }
    return args;
}