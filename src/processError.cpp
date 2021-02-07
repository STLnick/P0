#include <iostream>

void processError(int e) {
    switch (e) {
        case 1:
            std::cerr << "Failed to open the file!" << std::endl;
            break;
        case 2:
            std::cerr << "There was no content in the file!" << std::endl;
            break;
        case 3:
            std::cerr << "Error reading from file!" << std::endl;
            break;
        case 4:
            std::cerr << "Error closing the file!" << std::endl;
            break;
        case 5:
            std::cerr << "Error writing to the file!" << std::endl;
            break;
        default:
            std::cerr << "Error Occurred - unprocessed exception thrown!" << std::endl;
    }
}