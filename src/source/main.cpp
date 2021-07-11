#include "../header/init.h"

int main(int argc, char* argv[]){
    InitProgram init(argc, argv);
    /*if(init.ProgramArguments.VERBOSE_MODE){
        std::cout << "Input file \t . . . . . ";
        strlen(init.ProgramArguments.input_filename) > 0 ?
            std::cout << init.ProgramArguments.input_filename << std::endl :
            std::cout << "NO INPUT FILE GIVEN" << std::endl;
        
        std::cout << "Output File\t . . . . . ";
        strlen(init.ProgramArguments.output_filename) > 0 ?
            std::cout << init.ProgramArguments.output_filename << std::endl :
            std::cout << "NO OUTPUT FILE GIVEN" << std::endl;
    }*/

    /*workerArguments programArgs = GetArguments(argc, argv);
    if(programArgs.VERBOSE_MODE){
        strlen(programArgs.input_filename) > 0 ? 
            std::cout << "[+] Input file : " << programArgs.input_filename << std::endl :
            std::cout << "[!] No input file given !" << std::endl;
        
        strlen(programArgs.output_filename) > 0 ?
            std::cout << "[+] Output file : " << programArgs.output_filename << std::endl :
            std::cout << "[!] No output file given !" << std::endl;
            std::cout << "[+] Target : " << programArgs.target_host << ":" << programArgs.port << std::endl;

    }*/

}