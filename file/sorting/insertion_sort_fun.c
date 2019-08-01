void insertion(int a[],int n)
{
long long int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		for(j=i-1;j>=0;j--)
		{	
			if(temp<a[j])
			{
			a[j+1]=a[j];
			}
			else
				break;

		}
		a[j+1]=temp;
	}
}
