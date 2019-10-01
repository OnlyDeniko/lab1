#include<string>
void get_words_diff_razdel(std::string st, std::string zn, std::string *w, int &k) {
	for (int i = 0; i < st.size(); i++) {
		if (zn.find(st[i]) == -1) {
			w[k].push_back(st[i]);
		}
		else {
			if (w[k].size() > 0) {
				k++;
			}
			w[k][0] = st[i];
		}
	}
}