int nth_bit(int x,int n) //��x�ĵ�nλ 
{
	return (x&(int)pow(2,n)) >>n;
}
