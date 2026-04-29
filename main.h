#pragma once

/*追加のインクルードディレクトリを設定することで./../AS-10A/を省ける*/
/*追加の依存ファイルにAS-10A/libを追加するかpragma commentすればリンクに成功する*/
/*dllでない方(こちら)のプログラムをスタートアッププロラムに登録*/

#define ASDLL_IMPORT

#include "10main.h"

#pragma comment(lib, "./../AS-10A/x64/Debug/AS-10A.lib")


