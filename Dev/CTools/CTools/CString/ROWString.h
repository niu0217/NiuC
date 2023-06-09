//
//  ROWString.h
//  CTools
//
//  Created by niu0217 on 2023/6/9.
//

#ifndef ROWString_h
#define ROWString_h

//一个人的信息
struct PersonInfo
{
    string name;
    vector<string> phones;
};

//使用istringstream读字符串
void ReadString(string& filename);

//使用ostringstream写入字符串


//测试
void Test_ROWString();

#endif /* ROWString_h */
