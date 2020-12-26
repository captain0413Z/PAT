#include<bits/stdc++.h> 
using namespace std;

int main(){
	char num[22];
	scanf("%s",num); //!
	
	set<int> s1;
	set<int> s2;
	for(int i=0;i<strlen(num);i++)
		s1.insert(num[i]-'0');
	
	char res[22];
	int index=0,flag=0;
	for(int i=strlen(num)-1;i>=0;i--){
		int tmp=2*(num[i]-'0')+flag;
		if(tmp<10){
			res[index]=tmp+'0';
			flag=0;
		}
		else{
			res[index]=tmp%10+'0';
			flag=tmp/10;
		}
		index++;
	}
	if(flag!=0){
		s1.insert(flag);
		res[index]=flag+'0';
		index++;
	}
	
	for(int i=index-1;i>=0;i--)
		s2.insert(res[i]-'0');

	if(s1==s2) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	for(int i=index-1;i>=0;i--)
		cout<<res[i];
	
	return 0;
}
