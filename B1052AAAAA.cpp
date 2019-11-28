/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//分析：因为不知道一行有多少个表情，所以用一个string类型的不定长二维数组vector存储表情包，
//以及可以调用v.size()顺便解决不知道一行有多少个表情的问题～～
//不定长数组共三行，分别对应输入用例的三行~只不过在存储如数组之前把它们的方括号去掉在存储~
//这里可以用string的substr方法实现～然后根据输入的数字序号输出对应的表情
//引用自：https://www.liuchuo.net/archives/613


int main() {

	int n = 0, t = 0, i = 0, j = 0;
	vector<vector<string> > v;//手眼口符号集合
	//输入
	for (i = 0; i < 3; i++) {
		string s;
		getline(cin,s);//扫描一整行
		vector<string> row;
		//处理这一整行
		j = 0; int k = 0;
		while (j < s.length()) {
			if(s[j]=='[')
				while (k++ < s.length()) {
					if (s[k] == ']') {
						row.push_back(s.substr(j + 1, k - j - 1));
						break;//从下标j+1开始长度为k-j+1的字符串，即子内容
					}
				}
			j++;
		}
		v.push_back(row);//将处理好的多个表情保存到vector中
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		int a, b, c, d, e;//5个表情
		cin >> a >> b >> c >> d >> e;//cin 在读取目标数据时，
		//会自动略过有效数据之前的空白字符( 回车、换行、制表符等 )。
		if (a > v[0].size() || b > v[1].size() || c > v[2].size() || d > v[1].size() || e > v[0].size() || a < 1 || b < 1 || c < 1 || d < 1 || e < 1) {
			cout << "Are you kidding me? @\\/@" << endl;
			// 另外转义字符 '\n' 也可以满足换行的功能。
			// 不同的是 endl 会保证将数据刷新到目的设备中( 而不是暂存在缓冲区中 )
			continue;
		}
		cout << v[0][a - 1] << "(" << v[1][b - 1] << v[2][c - 1] << v[1][d - 1] << ")" << v[0][e - 1] << endl;
	}
	return 0;
}
*/