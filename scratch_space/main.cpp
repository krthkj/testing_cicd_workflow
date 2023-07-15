#include <iostream>
#include <string>
/**
 * @enum RetVal
 * @brief Possible return values of main function
 */
enum class RetVal : int {
    Success = 0, /* @brief Execute without error */
    Fail = 1     /* @brief Execute with error */
};

/**
 * @fn main
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char** argv)
{
    return static_cast<int>(RetVal::Success);
}
