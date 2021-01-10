int min()
{
	if(s.size()==0)
	return -1;

	return minelemenet;
}
void push(int x)
{
	if(s.size()==0)
	{
		s.push(x);
		minelement = x;
	}
	else
	{
		if (x>=minelelement)
		{
			s.push(x);
		}
		else if(x<minelement)
		{
			s.push((2*x)-minelement);
			minelement = x;
		}
		
	}
	
}
void pop()
{
	if(s.size()==0)
	return -1;
	else
	{
		if(s.top()>=minelement)
		s.top();
		else if(s.top()<minelement)
		minelement = 2*minelement - s.top();
		s.pop();
	}
	
}
int top()
{
	if(s.size()==0)
	return -1;
	else
	{
		if(s.top()>=minelement)
		return s.top();
		else if(s.top()<minelement)
		return minelement;
		
	}
}