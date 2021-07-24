#include "CorrChecker.h"

int CorrChecker::check()    //���������� ���, � ������� ��������������� ��������� ����
{
    /*��� ����� ����� ��������. TODO: ��������� ������ �� ����������� ����������*/
    /*-----------------------------------------------------*/
    cout << "Enter the path without the name of the file:";
    cin.getline(myFilePath, sizeof(myFilePath));
    cout << "Enter the file name without the extension:";
    cin.getline(myFileName, sizeof(myFileName));
    myBatPath = (string)myFilePath + "\\mybatchfile.bat";
    /*-----------------------------------------------------*/
    batch.open(myBatPath, ios::out);

    batch << "@echo OFF" << endl;
    batch << "g++ " << myFilePath << "\\" << myFileName << ".cpp -o " << myFilePath << "\\" << myFileName << endl;
    batch << "exit /b %errorlevel%" << endl;

    batch.close();
    const char* temp = myBatPath.c_str();   //������� system() ��������� ������ char*
    int retCode = system(temp);
    //cout << "the return code is: " << retCode << endl;
    return retCode;
}
