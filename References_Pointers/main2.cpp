#include <iostream>
#include <string>

void questionAsker(std::string& question, std::string& bannedword)
{
    std::cout << "Please type a question below: " << '\n';
    std::cin >> question;
    std::cout << "Please type a banned word: " << '\n';
    std::cin >> bannedword;
}

void replyAnalyzer(std::string& response, std::string& bannedword)
{
    std::cout << "Please type a response below: " << '\n';
    std::cin >> response;
    

    if (!response.find(bannedword))
    {
        response = "Bananas aren't allowed in these parts";
        std::cout << response;
    }
    else
    {
        std::cout << response;
    }
}

int main()
{
    std::string question {};
    std::string response {};
    std::string bannedword {};


    questionAsker(question, bannedword);
    replyAnalyzer(response, bannedword);
}