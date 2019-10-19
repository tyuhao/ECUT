function fact=fact(n)
  fact=1;
    for i=1:n
      fact=fact*i;
      if fact>10100
        disp(i)
        continue
      endif
    end
end
