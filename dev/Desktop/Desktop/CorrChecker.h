#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class CorrChecker
{
public:
    int check();
private:
    char myFilePath[100];   //���� � .cpp ����� ��� �������� ������ �����
    char myFileName[50];    //�������� .cpp �����
    string myBatPath;       //���� � .bat ����� ������ � ��� ���������
    ofstream batch;
    
};

