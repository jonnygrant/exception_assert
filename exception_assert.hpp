#ifndef EXCEPTION_ASSERT_HPP
#define EXCEPTION_ASSERT_HPP

// C++ runtime assert that throws a logic_error when the condition is not met
// That gives the application a chance to handle the exception at runtime.
// This is better than std::abort or std::terminate which don't give the application
// a chance to handle

#include <stdexcept>

/**
 * @brief Custom assertion function that throws a std::logic_error if a condition is not met.
 *
 * This function checks the specified condition and, if it evaluates to false, throws a std::logic_error
 * exception with an optional error message. The error message is used to provide additional context
 * about the failed condition.
 *
 * @param condition The condition to be checked. If this condition is false, an exception is thrown.
 * @param message   An optional error message to describe the failed condition. If not provided or set
 *                 to nullptr, an empty string is used as the error message.
 *
 * @throws std::logic_error When the 'condition' parameter is false, a std::logic_error exception is thrown
 *                         with any specified error message.
 *
 * Example usage:
 * @code
 * try
 * {
 *     exception_assert(x > 0, "x must be greater than 0");
 *     // Code that relies on the condition being true.
 * } catch (const std::logic_error& e)
 * {
 *     // Handle the exception, which provides information about the failed condition.
 * }
 * @endcode
 */
void exception_assert(bool condition, const char * message)
{
    if(!condition)
    {
        const char * msg = message?message:"";
        throw std::logic_error(msg);
    }
}

#endif
