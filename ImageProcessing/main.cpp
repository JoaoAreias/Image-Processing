/** This is a simple program on learning
 *  how to manipulate images in c++
 */
#include <iostream>

#include <fstream>

bool copyImage(const std::string &src, const std::string &dst){
    /** Copy an image file
     *
     * @param src Path to the source file
     * @param dst Path to the destination file
     * @return A boolean value indicating if copy was successful
     */

    // Opening image
    std::ifstream input_file;
    input_file.open(src, std::ios::binary);
    if(input_file.fail()){
        std::cout << "Failed to open " << src << std::endl;
        return false;
    }
    // Opening destination file
    std::ofstream output_file;
    output_file.open(dst, std::ios::binary);
    if(output_file.fail()){
        std::cout << "Failed to open" << dst << std::endl;
        return false;
    }
    // Reading image header
    unsigned char header[54];
    unsigned char colorTable[1024];
}

int main(int argc, char *argv[]) {
    if(argc != 3) {
        std::cout << "Please use the form: ./ImageProcessing <mode> <file path>" << std::endl;
        return 1;
    }

    switch (argv[1][1]){
        case 'c':
            const std::string cpy = "cpy_";
            std::string str(argv[2]);
            copyImage(str, cpy + str);
            break;
    }

    return 0;
}