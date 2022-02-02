// function for filled orders
int fillorders(vector<int> order,int k)
{
	int count=0;
	sort(order.begin(),order.end());
	for(int x:order)
	{
		if(x<=k)
		{
			count++;
			k=k-x;
		}
	}
	return count;
}
