doy=input('����գ�');
year=input('��ݣ�');

monthd(1:12)=[31,28,31,30,31,30,31,31,30,31,30,31];
if ((mod(year,4)==0 & mod(year,100)~=0) | mod(year,400)==0)
  monthd(2)=29;
end

for i=1:12
  doy=doy-monthd(i);
  if doy<=0
    month=i;
    day=doy+monthd(i-1);
    break
  end
end
fprintf('%d��%d��\n',month,day);

month=input('�·ݣ�');
day=input('���ڣ�');
doy=0;
if month==1
    doy=doy+day
else
for i=2:month
    doy=doy+monthd(i-1);
end
doy=doy+day+1;
end
fprintf('�����:%d\n',doy);
