#include <iostream>
#include <string>
using namespace std;
int gbk_strlen(const char* str)
{
    const char* p = str;        //p用于后面遍历
    
    while(*p)                   //若是结束符0，则结束循环
    {
        if(*p < 0 && (*(p+1)<0 || *(p+1) < 63))         //中文汉字情况
        {
            str++;              //str移动一位，p移动移动2位，因此长度加1
            p += 2;
        }
        else
        {
            p++;                //str不动，p移动一位，长度加1
        }
    }
    return p-str;               //返回地址之差
}
int main(){
    string str = "你好";
    cout << "size:" << str.size() << endl;
    cout << "len:" << str.length() << endl;

    std::wstring derivative_word(str.begin(), str.end());
    wcout << "size:" << derivative_word.size() << endl;
    wcout << "len:" << derivative_word.length() << endl;
    
    cout << "len:" << gbk_strlen(str.c_str()) << endl;   
    return 0;
}
