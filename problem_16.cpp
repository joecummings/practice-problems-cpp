#include <iostream>
#include <string>

using namespace std;

int main() {
    
  string big_num = "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376";
  
  int big_num_len = big_num.length();
  long result = 0;
  
  for (int i = 0; i < big_num_len; i++)
  {
    int parsed_num = big_num[i] - '0';
      
    result += parsed_num;
  }
  
  cout << result;
  
  return 0;
  
}