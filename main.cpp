#pragma once

#include "main.h"

namespace ArcaStruct::Software::AS0010{

}

int main(void)
{
	ArcaStruct::Software::AS0010::FilePath *fpCaller = new ArcaStruct::Software::AS0010::FilePath;
	fpCaller->InitializeA(NULL);
	
	char strDirName[TSTR_MAX+2];
	strcpy(strDirName,fpCaller->RelativePathA(""));
	ArcaStruct::Software::AS0010::Execute(strDirName, fpCaller->RelativePathA("GUI.json"));
	return 0;
}