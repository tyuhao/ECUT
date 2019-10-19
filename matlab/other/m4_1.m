	function y=fo(x,n)
	y=0;
	f=-1;
	for i=1:n
		y=y+sin(i*x)+f*cos(i*x);
	f=-f;
	end
	end
