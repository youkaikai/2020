// 天外飞仙.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include "uCharacter.h"
#include "mainMove.h"

int main()
{
	mainMove* mpMainMove=new mainMove;//ゲームメインループのインスタンス確保

	mpMainMove->init();

	while (true)//無限ループ環境を作る
	{
		if (mpMainMove->getGameOverFlag() ){
			break;
		}
		mpMainMove->move();
		
	} 


	delete mpMainMove;
	
	return 0;

}

