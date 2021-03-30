#include <string>
using namespace std; 

class Printer{
public:
    static std::string printerError(const std::string &s){
      int errors = 0;
      for (int i = 0; i < s.length(); i++){
        char chr = s[i];
        if(!(chr>='a' && chr<='m')){
           errors++;
        }
      }
      return std::to_string(errors) + "/" + std::to_string(s.length());
    }
};