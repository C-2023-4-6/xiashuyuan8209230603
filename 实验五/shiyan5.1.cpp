#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:            // ���ݳ�ԱΪ���õ�
		int hour;
	int minute;
	int sec;
public:
	void settime(int h,int m,int s) {
	
		cin >> hour;      //�����趨��ʱ�� 
		cin >> minute;
		cin >> sec;
	}
	void showtime() {
		          //����t1ΪTime�����
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.settime(0,0,0);
	t1.showtime();
}






