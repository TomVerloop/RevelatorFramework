#include "ScreenTransaction.hpp"


ScreenTransaction::ScreenTransaction(int id, std::string Message, std::string from, std::string to) : Id{ id }, Message{ Message }, From{ from }, To{ to }
{
}


ScreenTransaction::~ScreenTransaction()
{
}
