declare 
    a number;
    b  number;
    c  number;
    d  number;
    e  number;
    summ number;
    avgg number;
begin
    a:=&a;
    b:=&b;
    c:=&c;
    d:=&d;
    e:=&e;
    summ:= a+b+c+d+e;
    avgg:= summ/5.0;
    dbms_output.put_line('sum is: '||summ|| ' And Average is: '||avgg);
end;
/