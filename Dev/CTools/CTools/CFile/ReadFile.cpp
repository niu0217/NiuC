//
//  ReadFile.cpp
//  CTools
//
//  Created by niu0217 on 2023/6/9.
//

#include "ReadFile.h"

//从文件中读取内容并保存到一个vector中
vector<string> Read_File(string& filename)
{
    string strData = "";
    vector<string> vctData;
    ifstream infile;

    infile.open(filename); //将文件流对象和文件关联起来

    if(infile)
    {
        while(!infile.eof())
        {
            infile>>strData;
            vctData.push_back(strData);
        }
        vctData.pop_back(); //因为上述操作将最后一行push了两遍
        
        return vctData;
    }
    else
    {
        cout<<"打开文件失败！！！"<<endl;
    }

    return {};
}

//测试文件读取
void Test_ReadFile()
{
    string filename = "CFile//Data//test_read.txt";
    vector<string> vctStr = Read_File(filename);
    
    for(auto str : vctStr)
    {
        cout<<str<<endl;
    }
    cout<<endl;
}
