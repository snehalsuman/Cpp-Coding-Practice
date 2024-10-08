#include <iostream>
using namespace std;

int main() {
	int node,edge,u,v;
	cout<<"Enter the number of nodes ";
	cin>>node;
	cout<<"Enter the number of edges ";
	cin>>edge;
	int arr[node][node];
	for(int i=0;i<edge;i++){
	    cin>>u>>v;
	    if(u>node || v>node){
	        cout<<"Invalid. Enter again. ";
	        i--;
	    }
	    else{
	    arr[u][v]=1;
	    }
	}
	for(int i=0;i<node;i++){
	    for(int j=0;j<node;j++){
	        cout<<arr[i][j]<<" ";
	    }
	    cout<<"\n";
	}

	
	return 0;
}