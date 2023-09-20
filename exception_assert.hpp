#ifndef EXCEPTION_ASSERT_HPP
#define EXCEPTION_ASSERT_HPP

// C++ runtime assert that throws a logic_error when the condition is not met
// That gives the application a chance to handle the exception at runtime.
// This is better than std::abort or std::terminate which don't give the application
// a chance to handle

#include <stdexcept>

void exception_assert(bool condition, const char * message)
{
    if(!condition)
    {
        const char * msg = message?message:"";
        throw std::logic_error(msg);
    }
}

#endif
