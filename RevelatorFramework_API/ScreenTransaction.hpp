#ifndef _SCREEN_TRANSACTION
#define _SCREEN_TRANSACTION

#include <string>

class ScreenTransaction
{
public:
	__declspec(dllexport) ScreenTransaction(int id = 0, std::string Message = "", std::string from = "", std::string to = "");
	__declspec(dllexport) ~ScreenTransaction();
	//setters
	__declspec(dllexport) void setMessage(std::string mes){ Message = mes; }
	__declspec(dllexport) void setId(int id){ Id = id; }
	__declspec(dllexport) void setFrom(std::string from){ From = from; }
	__declspec(dllexport) void setTo(std::string to){ To = to; }
	//getters
	__declspec(dllexport) std::string getMessage() { return Message; }
	__declspec(dllexport) int getId(){ return Id; }
	__declspec(dllexport) std::string getFrom() { return From; }
	__declspec(dllexport) std::string getTo() { return To; }

private:

protected:
	std::string Message;
	int Id;
	std::string From;
	std::string To;
};

#endif //! _SCREEN_TRANSACTION