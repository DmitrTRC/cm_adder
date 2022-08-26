#include <iostream>
#include <filesystem>


int main (int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <project-name>" << std::endl;
        return 1;
    }

    namespace fs = std::filesystem;

    fs::path projectPath = argv[1];
    fs::create_directory (projectPath);
    fs::create_directory (projectPath / "src");
    fs::create_directory (projectPath / "bin");
    fs::create_directory (projectPath / "tests");
    fs::create_directory (projectPath / "docs");
    return 0;
}
