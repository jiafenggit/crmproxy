default:
	export CFLAGS="$CFLAGS -O0 -fbuiltin -g"
	export CXXFLAGS="$CXXFLAGS -O0 -fbuiltin -g"
	
	g++ -g -c WSSMonitor.cpp MonitorManager.cpp MonitorParser.cpp MonitorParserCRM.cpp -lpthread -std=c++11 -I ../include -I /usr/include/mysql  -I /usr/include/mysql++ -I /usr/local/boost/include -I /usr/local/include/hiredis
clean:
	rm -f ./*.o