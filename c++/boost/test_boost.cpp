#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>
#include "boost/locale.hpp"
using namespace std;

int main(){
    string src = "我是中国人";
    std::wstring derivative_word = boost::locale::conv::utf_to_utf<wchar_t>(src);
    cout << derivative_word.size() << endl;
    return 0;
}
