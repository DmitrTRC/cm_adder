//
// Created by Dmitry Morozov on 26/8/22.
//

#ifndef CM_ADDER_DEV_DIR_BUILDER_HPP
#define CM_ADDER_DEV_DIR_BUILDER_HPP

#include <string>


class DirBuilder {
public:
    DirBuilder (std::string);

    bool build ();

private:
    std::string path_;

    std::vector<std::string> getFolders (std::string);

};


#endif //CM_ADDER_DEV_DIR_BUILDER_HPP
