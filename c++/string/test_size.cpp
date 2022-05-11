#include <codecvt>
#include <cstring>
#include <iostream>
#include <locale>
#include <string>
using namespace std;

inline std::wstring to_wide_string(const std::string& input) {
  std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
  return converter.from_bytes(input);
}
// convert wstring to string
inline std::string to_byte_string(const std::wstring& input) {
  // std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
  std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
  return converter.to_bytes(input);
}

int main() {
  int64_t cmdid = 1234456;
  string cmsid_str = "20220505A04EPK0000你好";
  cout << sizeof(cmdid) << endl;
  cout << strlen(cmsid_str.c_str()) << endl;

  std::string str_test1;
  std::string str_test2 = "Hello Word";

  int value1, value2, value3;

  value1 = sizeof(str_test1);
  value2 = sizeof(str_test2);
  value3 = sizeof(std::string);

  std::cout << "str_test1占" << value1 << " 个字节" << std::endl;
  std::cout << "str_test2占" << value2 << " 个字节" << std::endl;
  std::cout << "string占" << value3 << " 个字节" << std::endl;

  const char* text1 = "arbitrary string value 1";
  string text2 = "arbitrary string value 2";

  cout << "strlen char* : " << strlen(text1) << endl;
  cout << "strlen string: " << strlen(text2.c_str()) << endl;
  cout << "size string: " << text2.size() << endl;

  string source = "你好china";
  cout << source.size() << endl;
  auto result = to_wide_string(source);
  cout << result.size() << endl;

  return 0;
}