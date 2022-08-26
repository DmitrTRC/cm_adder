#include <iostream>
#include <filesystem>


int main (int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <project-name>" << std::endl;
        return 1;
    }
    std::string projectName = argv[1];
    std::string projectPath = "./" + projectName;
    std::filesystem::create_directory (projectPath);

    return 0;
}
