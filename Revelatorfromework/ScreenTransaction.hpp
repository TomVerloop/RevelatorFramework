#ifndef _SCREEN_TRANSACTION
#define _SCREEN_TRANSACTION

#include <string>

class ScreenTransaction
{
public:
	ScreenTransaction(int id = 0,std::string Message = "", std::string from = "", std::string to = "");
	~ScreenTransaction();


	//setters
	void setMessage(std::string mes){ Message = mes; }
	void setId(int id){ Id = id; }
	void setFrom(std::string from){ From = from; }
	void setTo(std::string to){ To = to; }
	//getters
	std::string getMessage() { return Message; }
	int getId(){ return Id; }
	std::string getFrom() { return From; }
	std::string getTo() { return To; }

private:

protected:
	std::string Message;
	int Id;
	std::string From;
	std::string To;
};

#endif //! _SCREEN_TRANSACTION