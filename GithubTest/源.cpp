#include <iostream> 
#include <string>

using namespace std;
int main(void) {
	bool ke;
	int nianfen = 0;
	int yuefen = 0;
	int tianshu = 0;
	cout << "请输入年份：\n";
	cin >> nianfen;
	cout << "请输入月份:\n";
	cin >> yuefen;
	if (nianfen % 400 == 0) {
		ke = true;
	}
	else if (nianfen % 4 == 0 && nianfen % 100 != 0) {
		ke = true;
	}
	else {
		ke = false;
	}
	switch (yuefen) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		tianshu = 31;
		break;
	case 2:if (ke == true) {
		tianshu = 29;
	}
		   else if (ke == false) {
		tianshu = 28;
	}
		   break;
	case 4:
	case 6:
	case 9:
	case 11:
		tianshu = 30;
		break;
	default:
		cout << "输入超出法定月份或输入错误！";
	}
	cout << nianfen << "年，" << yuefen << "月,本月共有" << tianshu << "天。" << endl;
	system("pause");
	return 0;
}