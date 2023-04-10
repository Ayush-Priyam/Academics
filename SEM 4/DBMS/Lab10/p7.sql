DECLARE
    n number;
    i number;
    c number;
BEGIN
    n:= &n;
    c:=0;
    for i in 2..n/2 loop
        if(MOD(n, i)=0) THEN
            c:= c+1;
        end if;
    end loop;
    if(c>0 OR n=1) THEN
        dbms_output.put_line(n|| ' is not a prime');
    ELSE
        dbms_output.put_line(n|| ' is a prime');
    end if;
END;
/