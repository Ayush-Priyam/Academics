DECLARE
    n number;
    i number;
    c number;
    b number;
BEGIN
    n:= &n;
    b:=&b;
    c:=0;
    for i in 1..b loop
        c:= c+n;
    end loop;
    dbms_output.put_line(c|| ' is the reuslt');
END;
/