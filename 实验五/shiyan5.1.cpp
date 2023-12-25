#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:            // 数据成员为公用的
		int hour;
	int minute;
	int sec;
public:
	void settime(int h,int m,int s) {
	
		cin >> hour;      //输入设定的时间 
		cin >> minute;
		cin >> sec;
	}
	void showtime() {
		          //定义t1为Time类对象
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.settime(0,0,0);
	t1.showtime();
}






