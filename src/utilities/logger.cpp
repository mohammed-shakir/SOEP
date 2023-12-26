#include "utilities/logger.h"
#include <iostream>

Logger::Logger()
{
}

void Logger::displayMessage()
{
    std::cout << "Hello from Logger!" << std::endl;
}