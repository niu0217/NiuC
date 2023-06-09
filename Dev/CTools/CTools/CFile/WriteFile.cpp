//
//  WriteFile.cpp
//  CTools
//
//  Created by niu0217 on 2023/6/9.
//

#include "WriteFile.h"

//向一个文件写入数据
void Write_File(string& filename)
{
    ofstream outfile;
    
    outfile.open(filename, ios::app); //在文件最后面添加内容
   // outfile.open(filename); //覆盖写入文件
    
    if(outfile)
    {
        outfile<<"999999!"<<endl;
        cout<<"写入成功！！"<<endl;
    }
    else
    {
        cout<<"文件打开失败！！"<<endl;
    }
}

//测试文件写入
void Test_WriteFile()
{
    string filename = "CFile//Data//test_write.txt";
    
    Write_File(filename);
}
