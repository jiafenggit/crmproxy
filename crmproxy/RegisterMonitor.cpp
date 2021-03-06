#include <RegisterMonitor.h>
#include <iostream>

int RegisterMonitor::makeAction(ParamMap data,IParser* currentParser)
{
    string number;
    string status;
    string address;
    
    RegisterParser* parser = dynamic_cast<RegisterParser*>(currentParser);
    
    
    if(parser->parsedata(data,number,status,address))
    {
	
        auto it = UidToIdStorage.find(number.substr(0,6));
        if(it!=UidToIdStorage.end())
        {
            DBWorker.PutRegisterEvent((*it).second,number,status,address);
        }
        else
        {
    	    
            string uid;
            string id;
        
            if(DBWorker.getUid(UidToIdStorage,uid,id))
            {
                DBWorker.PutRegisterEvent(id,number,status,address);
            }
	
        }
    }
    return 0;
}