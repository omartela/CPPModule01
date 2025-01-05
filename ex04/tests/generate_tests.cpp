#include <fstream>
#include <iostream>

void create_test_file(const std::string& filename, const std::string& content) {
    std::ofstream file(filename);
    if (file) {
        file << content;
        file.close();
        std::cout << "Created: " << filename << std::endl;
    } else {
        std::cerr << "Failed to create file: " << filename << std::endl;
    }
}

int main() {
    // Test Case 1: Simple Replace
    create_test_file("test1.txt", "Hello world!\nThis is a test file.\nLet's replace world with universe.\n");

    // Test Case 2: Replace an Empty String (Remove Word)
    create_test_file("test2.txt", "Remove all spaces.\nThis is a simple test with spaces.\nWe should remove spaces.\n");

    // Test Case 3: Replace Special Characters
    create_test_file("test3.txt", "Replace @ with #.\nHello @world!\nThis is a test with special @characters.\n");

    // Test Case 4: Case Sensitivity
    create_test_file("test4.txt", "The quick brown fox jumps over the lazy dog.\nA quick brown fox jumped over a lazy dog.\n");

    // Test Case 5: Multiple Occurrences
    create_test_file("test5.txt", "apple apple apple apple.\nLet's replace apple with orange.\n");

    // Test Case 6: Large File
    std::ofstream large_file("test6.txt");
    for (int i = 0; i < 1000; ++i) {
        large_file << "This is a large test file. This is a large test file.\n";
    }
    large_file.close();
    std::cout << "Created: test6.txt" << std::endl;

    // Test Case 7: Empty Input File
    create_test_file("test7.txt", "");

    // Test Case 8: File with Only One Word (s1 == s2)
    create_test_file("test8.txt", "Replace this word with this word.\n");

    // Test Case 9: Files with Spaces and Special Characters
    create_test_file("test 9.txt", "Hello, world! Let's check some special characters.\n");

    return 0;
}

