/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//��������Ϊ��֪��һ���ж��ٸ����飬������һ��string���͵Ĳ�������ά����vector�洢�������
//�Լ����Ե���v.size()˳������֪��һ���ж��ٸ���������⡫��
//���������鹲���У��ֱ��Ӧ��������������~ֻ�����ڴ洢������֮ǰ�����ǵķ�����ȥ���ڴ洢~
//���������string��substr����ʵ�֡�Ȼ����������������������Ӧ�ı���
//�����ԣ�https://www.liuchuo.net/archives/613


int main() {

	int n = 0, t = 0, i = 0, j = 0;
	vector<vector<string> > v;//���ۿڷ��ż���
	//����
	for (i = 0; i < 3; i++) {
		string s;
		getline(cin,s);//ɨ��һ����
		vector<string> row;
		//������һ����
		j = 0; int k = 0;
		while (j < s.length()) {
			if(s[j]=='[')
				while (k++ < s.length()) {
					if (s[k] == ']') {
						row.push_back(s.substr(j + 1, k - j - 1));
						break;//���±�j+1��ʼ����Ϊk-j+1���ַ�������������
					}
				}
			j++;
		}
		v.push_back(row);//������õĶ�����鱣�浽vector��
	}
	cin >> n;
	for (i = 0; i < n; i++) {
		int a, b, c, d, e;//5������
		cin >> a >> b >> c >> d >> e;//cin �ڶ�ȡĿ������ʱ��
		//���Զ��Թ���Ч����֮ǰ�Ŀհ��ַ�( �س������С��Ʊ���� )��
		if (a > v[0].size() || b > v[1].size() || c > v[2].size() || d > v[1].size() || e > v[0].size() || a < 1 || b < 1 || c < 1 || d < 1 || e < 1) {
			cout << "Are you kidding me? @\\/@" << endl;
			// ����ת���ַ� '\n' Ҳ�������㻻�еĹ��ܡ�
			// ��ͬ���� endl �ᱣ֤������ˢ�µ�Ŀ���豸��( �������ݴ��ڻ������� )
			continue;
		}
		cout << v[0][a - 1] << "(" << v[1][b - 1] << v[2][c - 1] << v[1][d - 1] << ")" << v[0][e - 1] << endl;
	}
	return 0;
}
*/