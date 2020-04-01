//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	string src;
//	while (getline(cin, src)) {
//		vector<char> str1;
//		vector<char> str2;
//		int i = 0;
//		for (; i < src.size(); i++) {
//			if (src[i] == ' ') {
//				i++;
//				break;
//			}
//			str1.push_back(src[i]);
//		}
//		for (; i < src.size(); i++) {
//			str2.push_back(src[i]);
//		}
//		if (str2.size() > str1.size() || str2.size() == 0) {
//			cout << 0 << endl;
//			continue;
//		}
//		int count = 0;
//		i = 0;
//		for (auto e : str1) {
//			if (e != str2[i]) {
//				i = 0;
//				continue;
//			}
//			if ((i + 1) == str2.size()) {
//				count++;
//				i = 0;
//				continue;
//			}
//			i++;
//		}
//		cout << count << endl;
//	}
//
//	return 0;
//}