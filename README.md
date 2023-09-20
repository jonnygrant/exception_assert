# exception_assert
Assert that throws a logic_error to give application a chance to handle

# Future
Could extend to pass a basic_stacktrace in an exception object, or even log the stacktrace when the condition fails via std::stacktrace::current(); That is better than relying upon __FILE__ and __LINE__ strings as it gets the calling code location, no one needs a lot of exception_assert.hpp file and line info.
