# include <iostream>
# include <vector>
# include <fstream>
# include <string>

int main(int ac, char **av)
{
    std::ifstream   ifs(av[1]);
    int result = 0;
    std::string line;
    int line1 = 0;
    std::vector<std::pair<std::string, std::string> >    edge;

    edge.push_back(std::pair< std::string, std::string >("twone", "twoone"));
    edge.push_back(std::pair< std::string, std::string >("nineight", "nineeight"));
    edge.push_back(std::pair< std::string, std::string >("oneight", "oneeight"));
    edge.push_back(std::pair< std::string, std::string >("threeight", "threeeight"));
    edge.push_back(std::pair< std::string, std::string >("fiveight", "fiveeight"));
    edge.push_back(std::pair< std::string, std::string >("sevenine", "sevennine"));
    edge.push_back(std::pair< std::string, std::string >("eightwo", "eighttwo"));
    edge.push_back(std::pair< std::string, std::string >("eighthree", "eightthree"));


    std::vector<std::pair<std::string, std::string > >    v;

    v.push_back(std::pair< std::string, std::string >("one", "1"));
    v.push_back(std::pair< std::string, std::string >("two", "2"));
    v.push_back(std::pair< std::string, std::string >("three", "3"));
    v.push_back(std::pair< std::string, std::string >("four", "4"));
    v.push_back(std::pair< std::string, std::string >("five", "5"));
    v.push_back(std::pair< std::string, std::string >("six", "6"));
    v.push_back(std::pair< std::string, std::string >("seven", "7"));
    v.push_back(std::pair< std::string, std::string >("eight", "8"));
    v.push_back(std::pair< std::string, std::string >("nine", "9"));



    while (getline(ifs, line))
    {
        std::vector<std::pair<std::string, std::string> >::iterator it = edge.begin();
        while (it != edge.end())
        {
            //std::cout << line << std::endl;
            //std::cout << it->first << std::endl;
            size_t  found = line.find(it->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, it->first.size(), it->second);
            it++;
            //std::cout << line << std::endl;
        }

        it = edge.begin();
        while (it != edge.end())
        {
            //std::cout << line << std::endl;
            //std::cout << it->first << std::endl;
            size_t  found = line.find(it->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, it->first.size(), it->second);
            it++;
            //std::cout << line << std::endl;
        }
        it = edge.begin();
        while (it != edge.end())
        {
            //std::cout << line << std::endl;
            //std::cout << it->first << std::endl;
            size_t  found = line.find(it->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, it->first.size(), it->second);
            it++;
            //std::cout << line << std::endl;
        }
        std::vector<std::pair<std::string, std::string> >::iterator itv = v.begin();
        while (itv != v.end())
        {
            //std::cout << line << std::endl;
            //std::cout << itv->first << std::endl;
            size_t  found = line.find(itv->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, itv->first.size(), itv->second);
            itv++;
            //std::cout << line << std::endl;
        }
        itv = v.begin();
        while (itv != v.end())
        {
            //std::cout << line << std::endl;
            //std::cout << itv->first << std::endl;
            size_t  found = line.find(itv->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, itv->first.size(), itv->second);
            itv++;
            //std::cout << line << std::endl;
        }
        itv = v.begin();
        while (itv != v.end())
        {
            //std::cout << line << std::endl;
            //std::cout << itv->first << std::endl;
            size_t  found = line.find(itv->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, itv->first.size(), itv->second);
            itv++;
            //std::cout << line << std::endl;
        }
        itv = v.begin();
        while (itv != v.end())
        {
            //std::cout << line << std::endl;
            //std::cout << itv->first << std::endl;
            size_t  found = line.find(itv->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, itv->first.size(), itv->second);
            itv++;
            //std::cout << line << std::endl;
        }
        
        itv = v.begin();
        while (itv != v.end())
        {
            //std::cout << line << std::endl;
            //std::cout << itv->first << std::endl;
            size_t  found = line.find(itv->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, itv->first.size(), itv->second);
            itv++;
            //std::cout << line << std::endl;
        }
        std::vector<std::pair<std::string, std::string> >::iterator itv2 = v.begin();
        while (itv2 != v.end())
        {
            //std::cout << line << std::endl;
            //std::cout << itv2->first << std::endl;
            size_t  found = line.find(itv2->first, 0);
            //std::cout << found << std::endl;
            if (found != std::string::npos)
                line.replace(found, itv2->first.size(), itv2->second);
            itv2++;
            //std::cout << line << std::endl;
        }
        
        std::string numbers = "00";
            
        for (size_t i = 0; i < line.size(); i++)
        {
            if (isdigit(line[i]))
            {
                numbers[0] = line[i];
                break;
            }
            
        }
        for (size_t i = line.size(); i >= 0; i--)
        {
            if (isdigit(line[i]))
            {
                numbers[1] = line[i];
                break ;
            }
        }
        result += std::stoi(numbers);
        std::cout << ++line1 <<  " : "<< numbers << " \t = " << result<< " \tl: "<< line <<std::endl;
    }
    std::cout << result << std::endl;
}