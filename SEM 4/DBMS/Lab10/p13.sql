DECLARE
    n number;
    i number;
    m number;
BEGIN
    n:= &n;
    for i in 1..10 loop
        m:=n*i;
        dbms_output.put_line(n||' X '||i||'= '||m);
    end loop;
END;
/