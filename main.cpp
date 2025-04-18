#include <iostream>



int second_function() {
    std::cout << "This is a second function." << std::endl;
    return 0;
}



int main() {
    int file_size = 100;
    double file_size_in_mb = file_size / 1024.0;
    std::cout << "File size in MB: " << file_size_in_mb  << std::endl;
    std::cout << "Hello, World!" << std::endl;
    second_function();
    return 0;
}

//cout is character output stream
//endl is used to insert a new line and flush the output buffer
//i call second function in the main function to execute its code.


