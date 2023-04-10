DECLARE
    n integer;
    i number(1);
    s number;
    m integer;
BEGIN
    s:= 0;
    n:= &n;
    m:=n;
    WHILE n!=0 LOOP
        i:= mod(n,10);
        s:= s*10 +i;
        n:= trunc(n/10); 
    END LOOP;
    if(s=m) then
        dbms_output.put_line('Palindrome'); 
    ELSE
        dbms_output.put_line('Not Palindrome'); 
    end if;
END;
/