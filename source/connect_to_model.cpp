#include <iostream>
#include <string>
#include <thread>
#include <chrono>

// Function defined in talk_to_ai.c
void talkToAI();

void connectToModel(std::string model) {
    std::cout << "Connecting you to " << model << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Success!" << std::endl;

    talkToAI();
}