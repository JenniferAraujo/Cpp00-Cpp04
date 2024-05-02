#include "Replace.hpp"

std::string replace_word(std::string original, std::string word_replace, std::string *line)
{
    size_t  index;
    index = (*line).find(original);

    while (index < (*line).length())
    {
        std::string after;
        std::string before;

        before = (*line).substr(0,index);
        after = (*line).substr(index + original.length(), (*line).length() - (before.length() + original.length()));
        *line = before.append(word_replace).append(after);
        index = (*line).find(original, index + 1);
    }
    return (*line);
}

void    replace(std::string original, std::string   word_replace, std::string file_name)
{
    std::ifstream    file;
    std::string     line;

    file.open(file_name.c_str());
    if (file.is_open()){
        std::string     fileReplace = file_name.append(".replace");
        std::ofstream   file_replace;
        file_replace.open(fileReplace.c_str());
        
        if(file_replace.is_open())
        {
            while(std::getline(file, line))
            {
                replace_word(original, word_replace, &line);
                file_replace << line;
                if (!file.eof())
                    file_replace << std::endl;
            }
        }
        file_replace.close();
    }
    file.close();
}

int    main(int ac, char **av)
{
    if (ac == 4)
    {
	std::string original = av[2];
        if (!original.empty())
            replace(av[2], av[3], av[1]);
        else
            std::cout << "Please enter valid word" << std::endl;
    }    
}
