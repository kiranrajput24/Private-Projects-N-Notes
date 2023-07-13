#ifndef _InsuffientFundMethod_H_
#define _InsuffientFundMethod_H_
class InsuffientFundMethod :std::exception
{
public:
    InsuffientFundMethod()noexcept = default;
    ~InsuffientFundMethod() = default;
    const char *what() const noexcept
    {
        return ("Insuffient Fund exception ");
    }
};

#endif