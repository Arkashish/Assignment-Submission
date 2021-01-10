int max()
{
	if(s.size()==0)
	return -1;

	return maxelemenet;
}
void push(int x)
{
	if(s.size()==0)
	{
		s.push(x);
		maelement = x;
	}
	else
	{
		if (x<=maxelelement)
		{
			s.push(x);
		}
		else if(x>maxelement)
		{
			s.push((2*x)-maxelement);
			maxelement = x;
		}
		
	}
	
}
void pop()
{
	if(s.size()==0)
	return -1;
	else
	{
		if(s.top()<=maxelement)
		s.top();
		else if(s.top()>maxelement)
		maxelement = 2*maxelement - s.top();
		s.pop();
	}
	
}
int top()
{
	if(s.size()==0)
	return -1;
	else
	{
		if(s.top()<=maxelement)
		return s.top();
		else if(s.top()>maxelement)
		return maxelement;
		
	}
}