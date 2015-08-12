uint32_t reverseBits(uint32_t n) {
	if(n==0) return 0;

    unsigned int  res = 1;

	unsigned int  count = 32;

	while(count!=0)

	{

		unsigned int  tmp = 0;

		tmp = n&0x1;

		n = n>>1;

		res = (res<<1)|tmp;

		count--;

	}

	return res;

    

}