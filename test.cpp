#include <iostream>

using namespace std;

class Nothing{
	private:
		int x;
	public:
		Nothing(int x=0):x(x){}
		int get(){
			return x;
		}
};

int main(){
	Nothing n{3};
	cout<<n.get()<<endl;
	return 0;
}

