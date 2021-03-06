#include "connection.hpp"
#include <unistd.h>

int main(int argc, char * argv[])
{

  int port = 5555;
  //  std::string IP = "192.168.43.166";
  std::string IP = "255.255.255.255";

  IPV4_Connection conn;

  conn.serverPort = port;
  conn.serverIP = IP;

  fprintf(stdout, "%d\n",conn.Initialize(false));

  std::string buff = "1, 5, 0.004, 0.008, 0.009";
  
  //  while(1)
    {
      fprintf(stdout, "%d, %d\n",conn.Send(buff.c_str(), buff.length()), errno);
    }
  return 0;
}
