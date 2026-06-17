#include <string>

namespace log_line
{
    std::string message(std::string line)
    {
        // return the message
        return line.substr(line.find(":") +2);
    }

    std::string log_level(std::string line)
    {
        // return the log level
        return line.substr(line.find("[]"));
    }

    std::string reformat(std::string line)
    {
        // return the reformatted message
        return log_line::message(line) + " " + "( " + log_line::log_level(line) + " )";
    }
} // namespace log_line
