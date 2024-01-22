#include <iostream>
#include <string>

// Simple structure to hold room details
struct Room {
    std::string description;
    std::string exit;
};

// Array to hold all rooms
Room rooms[4] = {
    {"You are in a dark room.", "south"},
    {"You are in a bright room.", "north"},
    {"You are in a quiet room.", "east"},
    {"You are in a noisy room.", "west"}
};

// Function to handle player's move
void Move(std::string direction) {
    for (int i = 0; i < 4; i++) {
        if (rooms[i].exit == direction) {
            std::cout << rooms[i].description << std::endl;
            break;
        }
    }
}

int main() {
    std::string input;

    std::cout << "Welcome to the Text Based Puzzle Game!" << std::endl;
    std::cout << "You can move south, north, east, or west." << std::endl;
    std::cout << "To exit, type 'exit'." << std::endl;

    while (true) {
        std::cout << "> ";
        std::cin >> input;

        if (input == "exit") {
            break;
        }

        Move(input);
    }

    std::cout << "Thank you for playing!" << std::endl;

    return 0;
}