#include <bits/stdc++.h>
using namespace std;

struct candidates
{
	string name;
	int pw,kill,dd;
};

bool comp(candidates a,candidates b){
	if(a.pw!=b.pw)return a.pw>b.pw;
	if(a.kill!=b.kill)return a.kill>b.kill;
	if(a.dd!=b.dd)return a.dd<b.dd;
	return a.name<b.name;
}

int main(int argc, char const *argv[])
{
	int n,i=0;
	cin>>n;
	candidates a[n+1];
	while(i<n){
		cin>>a[i].name>>a[i].pw>>a[i].kill>>a[i].dd;
		i++;
	}
	stable_sort(a,a+n,comp);
	cout<<a[0].name<<endl;
	return 0;
}