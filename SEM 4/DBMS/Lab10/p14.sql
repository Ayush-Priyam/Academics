DECLARE
    n integer;
    i number(1);
    s number;
BEGIN
    s:= 0;
    n:= &n;
    WHILE n!=0 LOOP
        i:= mod(n,10);
        s:= s+i;
        n:= trunc(n/10); 
   END LOOP;
   dbms_output.put_line('sum of digits: '|| s); 
END;
/