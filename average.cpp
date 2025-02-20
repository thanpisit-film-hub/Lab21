#include <iostream>
#include <cstdlib>
int main(int argc, char* argv[]){
    double sum = 0, arg = 0;
    if(argc <= 1){
        std::cout << "Please input numbers to find average.";
    }else{
        for(int i = 1; i < argc; i++){
            sum += atof(argv[i]);
        }
        arg = sum / (argc-1);
        std::cout << "---------------------------------\n";
        std::cout << "Average of " << argc-1 << " numbers = " << arg << "\n";
        std::cout << "---------------------------------";
    }
    return 0;
}