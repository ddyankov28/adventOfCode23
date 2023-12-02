# include <iostream>
# include <fstream>
# define MAX_RED 12
# define MAX_GREEN 13
# define MAX_BLUE 14

int main(int ac, char **av)
{
    std::ifstream   file(av[1]);
    std::string     line;

    while (getline(file, line))
    {
        int gameID = 1;
        std::cout << line << std::endl;
    }

    return 0;
}