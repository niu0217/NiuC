//
//  ROWString.cpp
//  CTools
//
//  Created by niu0217 on 2023/6/9.
//

#include "ROWString.h"

//使用istringstream读字符串
void ReadString(string& filename)
{
    string line;
    string word;
    vector<PersonInfo> people;
    
    ifstream infile(filename); //in模式
    
    if(infile)
    {
        while(getline(infile, line)) //一行一行读取文件内容
        {
            PersonInfo info;
            istringstream record(line); //将读出来的一行和record关联起来
            
            record>>info.name;
            while(record>>word) //读取一行中的多个电话号码
            {
                info.phones.push_back(word);
            }
            
            people.push_back(info);
        }
    }
    else
    {
        cout<<"文件打开失败！！"<<endl;
    }
}

//测试
void Test_ROWString()
{
    string filename = "CString//Data//Person.txt";
    ReadString(filename);
    cout<<"ending...."<<endl;
}
