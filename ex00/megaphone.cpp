#include <iostream>
#include <cstring>

int main(int argc, char** argv)
{   
    if(argc > 1 )
    {
        for(int i = 1 ; i < argc ; i++)
        {
            for (int x = 0; x < strlen(argv[i]); x++)
                    putchar(toupper(argv[i][x]));
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
    return(0);
}