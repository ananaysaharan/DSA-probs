//Que-1 Floor and ceil

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low=0,high=n-1,mid;
	int floorans=-1;
	while(low<=high){
		mid= low +((high-low)/2);
		if(a[mid]==x){
			floorans=a[mid];
			break;
		}
		else if(a[mid]<x){
			floorans=a[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	

	low=0,high=n-1;
	int cans=-1;
	while(low<=high){
		mid= low +((high-low)/2);
		if(a[mid]==x){
			cans=a[mid];
			break;
		}
		else if(a[mid]<x){
			low=mid+1;
		}
		else{
			cans=a[mid];
			high=mid-1;
		}
	}
	
	return {floorans,cans};
}
