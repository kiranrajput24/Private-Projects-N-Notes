#ifndef _ILLEGAL_EXCEPTION_H_
#define _ILLEGAL_EXCEPTION_H_

class illegalBalanceException : public std::exception
{
public:
    illegalBalanceException() = default;
    ~illegalBalanceException() = default;
    const char *what() const noexcept
    {
        return ("Negative Balance exception ");
    }
};

#endif