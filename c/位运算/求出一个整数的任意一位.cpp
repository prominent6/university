int nth_bit(int x,int n) //求x的第n位 
{
	return (x&(int)pow(2,n)) >>n;
}
