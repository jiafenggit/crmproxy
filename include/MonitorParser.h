#include <IParser.h>
#include <string>

using namespace std;

class MonitorParser :public IParser
{
    string parse_cdrevent(string uniqueID);
public:
    MonitorParser(string requestStr);
    string parsedata(ParamMap& data);
};