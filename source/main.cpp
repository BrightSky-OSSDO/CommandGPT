#include <iostream>
#include <string>

// Function defined in connect_to_model.cpp
void connectToModel(std::string model);

std::string toLowerCase(const std::string& string) {
    std::string result = string;

    for (char& c : result) {
        c = std::tolower(c);
    }

    return result;
}

void validateModelName(std::string model) {
    std::string aiModel = toLowerCase(model);

    if (aiModel == "gpt-3.5-turbo") {
        connectToModel("GPT-3.5-Turbo");
    } else if (aiModel == "gpt-4") {
        connectToModel("GPT-4");
    } else if (aiModel == "gpt-4o-mini") {
        connectToModel("GPT-4o-Mini");
    } else if (aiModel == "gpt-4o") {
        connectToModel("GPT-4o");
    } else if (aiModel == "o1-mini") {
        connectToModel("o1-mini");
    } else if (aiModel == "o1") {
        connectToModel("o1");
    } else if (aiModel == "o1-pro") {
        connectToModel("o1-pro");
    } else if (aiModel == "o3-mini") {
        connectToModel("o3-mini");
    } else {
        std::cout << "Invalid model name" << std::endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <model_name>" << std::endl;
        return 0;
    }

    validateModelName(argv[1]);
    return 0;
}